#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0)
    {
        return a;
    }

    return gcd(b,a%b);
}

int lcm(int a,int b){
    return a*b/gcd(a,b);
}

int main()
{   int a,b;
    cin>>a>>b;

    int gcf = gcd(a,b);
    cout<<"greatest common factor is "<<gcf<<endl;

    int lc = lcm(a,b);
    cout<<"lowest common factor is "<<lc<<endl;

    return 0;
}