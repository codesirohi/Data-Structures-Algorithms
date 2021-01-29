#include<bits/stdc++.h>
using namespace std;

//complexity of recursion (2^N )
//complexity of dp O(N) 
//space complexity is O(N) in recursion 

int fibDP(int n,vector<int> v){  //top down dp
    
   

    if(n==0 || n==1){
        v[n] =n;
        return v[n];
    }

    if(v[n] != -1){
        return v[n];
    }

    else{

        v[n] =  fibDP(n-1,v) +  fibDP(n-2,v);
        return v[n];
    }

    
}

int bottomUP(int n)  //bottom up dp
{

    vector<int> dp(100);
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2; i<=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    return dp[n];
}


int main(){
    
    
    int n;
    
    vector<int> v(100,-1);
    
    cin>>n;
    cout<<fibDP(n,v)<<endl;
    cout<<bottomUP(n)<<endl;


     

    return 0; 
}