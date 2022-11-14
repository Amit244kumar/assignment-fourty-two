#include<conio.h>
#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int>q1;
    int d;
    cout<<"Enter 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
       cin>>d;
       q1.push(d);
    }
    cout<<"Elements of queue"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    getch();
    return 0;
}
