#include<iostream>
#include<deque>
using namespace std;

int main()
{

    int n;
    int a[1000];
    int k;

    cin>>n;
    for(int i =0; i<n ;i++)
    {
        int temp;        
        cin>>temp;
        a[i] = temp;
        
    }
    cin>>k;

    //process to process frist k ememenl
    deque<int> Q(k);

    for(int i =0;i<k;i++)
    {
        while(!Q.empty && a[i]>a[Q.back()])
        {
              
        }
    }


    return 0;
}