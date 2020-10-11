#include<iostream>
using namespace std;

int fib(int n){
    for(int k=0;k<n;k++){    
    
        if(n==0||n==1){
            return n;
        }
        int t1= fib(n-1);
        int t2 = fib(n-2);

        cout<< <<t1 + t2<<" ";
    }
}

int main()
{

    int k;
    cin>>k;
    cout<<fib(k)<<" ";
    return 0;
    
}