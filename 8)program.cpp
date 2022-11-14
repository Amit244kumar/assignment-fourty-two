#include<iostream>
#include<conio.h>
#include<queue>

using namespace std;
void printQue(queue<int>q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main()
{
      int f;
    queue<int>q;
    cout<<"Enter 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        q.push(f);
    }
    cout<<"The elements of queue"<<endl;
    printQue(q);
    getch();
}
