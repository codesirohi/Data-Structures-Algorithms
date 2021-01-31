#include<bits/stdc++.h>
using namespace std;

int minCoin(int n, vectors<int> coins, int amount){


    if(amount == 0) return 0;

    int coinsNeeded = INT_MAX;

    for(int i = 0; i<n ; i++){

        if(amount-coins[i] >= 0 )
        {

            int smallerAns = minCoin(n,coins,amount-coins[i]);

            if(smallerAns != INT_MAX) {
                ans = min(ans, smallerAns+1);
            }

        }

    }

    



}

int main(){


    cout<<"Enter No. of coins: ";
    int n;
    cin>>n;
    vector<int> coins(n);
    cout<<"Enter the values of coins: ";
    
    for(auto i : coins){
        cin>>i;
    }
    cout<<"Enter the amount: ";
    int amount;
    cin>>amount;


    cout<<minCoin(int n, vector<int> coins, int amount)<<endl;


    return 0;
}