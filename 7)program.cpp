#include<iostream>
#include<conio.h>
#include<queue>

using namespace std;
void print(queue<int>q)
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
    queue<int>q1;
    queue<int>q2;
    int f;
    cout<<"Enter 5 elements of first queue"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        q1.push(f);
    }
    cout<<"Enter 7 elements of first queue"<<endl;
    for(int i=0;i<7;i++)
    {
        cin>>f;
        q2.push(f);
    }
    cout<<"The first queue elements"<<endl;
    print(q1);
    cout<<"The second  queue elements"<<endl;
    print(q2);
    q1.swap(q2);
    cout<<"The first queue elements after swaping"<<endl;
    print(q1);
    cout<<"The second  queue elements second swaping"<<endl;
    print(q2);
    return 0;
}


