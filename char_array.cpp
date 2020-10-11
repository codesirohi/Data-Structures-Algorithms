#include<iostream>
using namespace std;

int main()
{
    char a[]= {'a','b','c','d','e','\0'};
    cout<< a<< endl;
    cout<<sizeof(a)<<endl;

    char b[] = "hello";
    cout<<b<<endl;

    char c[100];
    cin>>c;

    cout<<c<<endl;

    return 0;
}