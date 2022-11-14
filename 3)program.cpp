#include<conio.h>
#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int a;
    queue<int>d;
    cout<<"Enter 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a;
        d.push(a);
    }
    if(d.size()==0)
    {
        cout<<"The queue is empty";
    }
    else{
        cout<<"The queue is not empty";
    }
    getch();
    return 0;
}
