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
    return n & (1<<i) !=0 ?1:0; //!=0 ?1:0 reads as if this not equal to Zero
                                //return 1 else 0;
}   
//change the ith bit of a numbers
void changeBit(int &n,int i){ //mask is 1 leftshift i

    int mask = i<<i;
    n = (n|mask);


}

int main(){

    int a,b;
    cin>>a>>b;
    // cout<<countBits(n)<<endl;
    //cout<<hack(n)<<endl;
    swap(a,b);
    return 0;
}