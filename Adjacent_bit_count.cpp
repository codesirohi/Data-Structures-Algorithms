//adjacent bit count

#include<bits/stdc++.h>
using namespace std;
int dp[105][105][2];

int bitCount(int n, int k,int first){

    if(n==0) return 0;
    if(n==1){
        if(k==0) return 1;
        else if(k<0)  return 0;
        else 
    }

    if(dp[n][k][first] != -1){
        return dp[n][k][first];
    }

    int ans = -1;
    if(first==1){
        ans = bitCount(n-1,k-1,1) + bitCount(n-1,k,0);
    }
    else ans = bitCount(n-1,k,1) + bitCount(n-1,k,0);

    ans = dp[n][k][first];
    return ans;

}


int main(){

    
    
     
    
    return 0;

}