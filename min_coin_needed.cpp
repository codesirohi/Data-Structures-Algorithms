#include<bits/stdc++.h>
using namespace std;

int minCoin(int n, vector<int> coins, int amount){


    if(amount == 0) return 0;

    int ans = INT_MAX;

    for(int i = 0; i<n ; i++){

        if(amount-coins[i] >= 0 )   
        {

            int smallerAns = minCoin(n,coins,amount-coins[i]);

            if(smallerAns != INT_MAX) 
            {
                ans = min(ans, smallerAns+1);
            }

        }

        

    }
    return ans;
}



int minCoinDP(int n, vector<int> coins, int amount) //bottom up
{
    vector<int> dp( (amount+1), INT_MAX);
    // int *dp = new int[amount+1];
    // for(int i = 0; i<amount; i++)
    // {
    //     dp[i] = INT_MAX;
    // }
    

 
     dp[0] = 0;
    for(int rupee = 1; rupee<=amount; rupee++){
        

        //iterator oevr coins smaller than i 
        for(int i = 0; i <n; i++){
            
            

            if(coins[i]<=rupee){

                int smallerAns = dp[rupee - coins[i]];
                
                if(smallerAns != INT_MAX && smallerAns + 1 < dp[i]){

                    dp[rupee] = smallerAns+1;

                }

            }
        }
    }


 
    return dp[amount];

}




int main(){


    // cout<<"Enter No. of coins: ";
    // int n;
    // cin>>n;
    // vector<int> coins;
    // cout<<"Enter the values of coins: ";
    
    // for(int i = 0; i<n; i++){
        
    //     int temp;
    //     cin>>temp;
    //     coins.push_back(temp);

    // }
    // cout<<"Enter the amount: ";
    // int amount;
    // cin>>amount;

    int n = 5;
    vector<int> coins = {1,2,5,10,50};
    int amount;
    cin>>amount;

    cout<<minCoinDP(n,coins, amount)<<endl;


    return 0;
}