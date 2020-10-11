#include<iostream>
using namespace std;

int fact(int num)
{   int ans = 1;
    for(int i=1;i<=num;++i)
    {
        ans = ans * i;        
    }
    return ans;
}

int main()
{   int n;
    cin<<n;
    int out = fact(n);
    cout<< out;
}