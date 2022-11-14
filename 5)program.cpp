#include<conio.h>
#include<iostream>
#include<queue>
#include<vector>
#include<string.h>
#include<bits/stdc++.h>
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
    cout<<"1.Book your name"<<endl;
    cout<<"2.See all name"<<endl;
    cout<<"Enter your choice";
    cin>>choice;
    return choice;
}
void Sort(vector<Name*>&f)
{
    Name *temp;
    int n=f.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(f[i]->getName()[0]>f[i+1]->getName()[0])
            {
                //performing swap operation
                //cout<<f.at(i)->getName()<<" "<<f.at(i+1)->getName()<<endl;
                temp=(f.at(i));
                f.insert(f.begin()+i,(f.at(i+1)));
                f.insert(f.begin()+i+1,temp);

            }
        }
    }

    cout<<endl<<endl;
}
void SortQueue(queue<Name*>&q)
{
    vector<Name*>v1;
    Name *n;
    while(!q.empty())
    {
        v1.push_back(q.front());
        q.pop();
    }

    Sort(v1);
    for(int i=0;i<v1.size();i++)
    {
       q.push(v1[i]);
    }
    cout<<"END"<<endl;
}

int main()
{
      Name *n;
      char name[20];
      queue<Name*>q;
      while(1)
      {
          system("cls");
          switch(menu())
          {
          case 1:
              n=new Name;
              cout<<"Enter your name"<<endl;
              cin.ignore();
              fgets(name,20,stdin);
              n->setName(name);
              q.push(n);
              cout<<"Your name booked successfully";
              break;
          case 2:
              SortQueue(q);
              while(!q.empty())
              {
                 n=q.front();
                  cout<<n->getName()<<endl;
                  q.pop();
              }
              break;
          default:
            cout<<"Invalid choice";
            break;
          }
          getch();
      }
}
