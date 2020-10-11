#include<iostream>
using namespace std;
int main()
{
    char a[]= {'a','b','c','d','e','\0'};
    cout<<a<<endl;

    char b[] = "hello";
    cout<<b<<endl;

    char para[1000];
    cin.getline(para,1000,'.');

    cout<<para<<endl;

    return 0;

}