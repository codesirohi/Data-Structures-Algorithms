#include<iostream>
using namespace std;

int main()
{
    int a[10];

    for(int i=0;i<=9;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<=9;i++)
    {
        a[i] = a[i]*a[i];
    }

    for(int i=0;i<=9;i++)
    {
        cout<<a[i]<<',';
        
    }
    cout<<endl;

    for(int i=9;i>=0;i--)
    {
        cout<<a[i]<<',';
    }
    
}