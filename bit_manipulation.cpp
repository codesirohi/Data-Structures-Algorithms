#include<bits/stdc++.h>
using namespace std;

int countBits(int n){ ///O(N)  // O(no. of bits)

    int count= 0;
    while(n>0){
        count +=(n&1);
        n = n>>1;
    }
    return count;
}

//hack  //odinh
int hack(int n){  // bit count// O(no. of set bits)
    int count = 0;
    while(n){
        
        n = n & (n-1);
        count++;

    }
    return count;
    
} 
//swap two numbers very fast

void swap(int a,int b){
    
    a = a^b;
    b= a^b;
    a= a^b;

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}

//extract ith bit from a numbers
int getBit(int n,int i)
{
    return n & (1<<i);
}


int main(){

    int a,b;
    cin>>a>>b;
    // cout<<countBits(n)<<endl;
    //cout<<hack(n)<<endl;
    swap(a,b);
    return 0;
}