#include<bits/stdc++.h>
using namespace std;


//k is the max possible jump
//if overlapping subproblem use dp
int waysRec(int steps){ //recursion approch

   
    if(steps==0) return 1;  //ways to stanf on the ground

    if(steps<0) return 0; 
   
    int ans = waysRec(steps-1) + waysRec(steps-2) + waysRec(steps-3);
    
    return ans;

}

int waysrecursive2(int steps, int k){  //O(k^N) complexity

   if(n==0) return 1;
   if(n<0) return 0;

int ans = 0; 

for(int j =1; j<=k;j++)
{
    ans+= waysrecursive2(steps-j,k);

} 

return ans;




}


int waysBU(int n,int k){   // DP complexity O(KN) with two for loops                            // in O(N) 

    vector<int> dp(n);

    dp[0] =1;
    
    for(int step = 1; ; step<=n; step++)
    {
        dp[step] =0;

        for(int j = 1; j<=k; j++)
        {
            if((step-j) > 0)
            {
                dp[step] += dp[step-j];
            }
        }
    }
 

return dp[n];

}

int waysBU(int n,int k){   // DP complexity O(N)                           // in O(N) 

    vector<int> dp(n);

    dp[0] =1;
    
    for(int step = 1; ; step<=n; step++)
    {
        dp[step] =0;

        //dp[n+1] = dp[n] + dp[n] - dp[n-k]   
        // the second  dp[n] is dp[n-1] + dp[n-2] +..... dp[n-k];
        
    }
 

return dp[n];

}



int main(){

    int steps,maxJump;
    cin>>steps;
    //here max jum is three 3
    cout<<waysRec(steps)<<endl;

    return 0;

}