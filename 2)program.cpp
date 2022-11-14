#include<conio.h>
#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
class Book
{
   private:
      char name[10];
   public:
     void setName(char n[])
     {
         strcpy(name,n);
     }
     char* getName()
     {
         return name;
     }
};
int menu()
{
    int choice;
    cout<<"1.Book ticket"<<endl;
    cout<<"2.See all booking "<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    return choice;
}
int main()
{
    queue<Book*>q;
    Book *b;
    char n[20];
    int i=1;
    while(1)
    {
        system("cls");
        switch(menu())
        {
        case 1:
            cout<<"Enter your name"<<endl;
            cin.ignore();
            fgets(n,20,stdin);
            b=new Book;
            b->setName(n);
            q.push(b);
            cout<<"Ticket book successfully"<<endl;
            break;
        case 2:
            while(!q.empty())
            {
                b=q.front();
                cout<<i<<"."<<b->getName()<<endl;
                q.pop();
                i++;
            }
            cout<<"The ticket booked serial wise";
            break;
            default:cout<<"Invalid choice";
        }
        getch();
    }
    return 0;
}
