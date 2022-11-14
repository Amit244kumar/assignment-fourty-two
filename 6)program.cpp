#include<conio.h>
#include<iostream>
#include<queue>
#include<string.h>

using namespace std;
class Name
{
    private:
        char name[20];
    public:
        void setName(char *n)
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
    cout<<"1.Schedule your application for interview"<<endl;
    cout<<"2.check your position "<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    return choice;
}
void printSlot(queue<Name*>d)
{
    int i=1;
    while(!d.empty())
    {
        cout<<i<<")"<<d.front()->getName()<<endl;
        d.pop();
        i++;
    }
}
int main()
{
      queue<Name*>q;
      Name *n;
      char name[20];
      int i=1;
      while(1)
      {
          system("cls");
          switch(menu())
          {
              case 1:
                  cout<<"Enter your name"<<endl;
                  cin.ignore();
                  fgets(name,20,stdin);
                  n=new Name;
                  n->setName(name);
                  q.push(n);
                  break;
              case 2:
                  printSlot(q);
                break;
              default:
                cout<<"Invalid choice";
          }
          getch();
      }
    return 0;
}


