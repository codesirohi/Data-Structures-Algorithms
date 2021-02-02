#include<bits/stdc++.h>
using namespace std;


int knapsack(vector<int> wts,vector<int> prices, int N,int W){

    if(N==0 || W==0) return 0;

    
    int include = 0;
    int exclude = 0;

    //checking if the item weight is lower than the bag capacity
    if(wts[N-1]<=W){
        //if we including the element the no. of elements
        // decreasing by 1 and the capacity of the decreasing by
        //the weight of the last element
        include = prices[N-1] + knapsack(wts, prices,N-1,W-wts[N-1]);
    }

    //when we exclude the element the no. of items decreses by 1 but 
    // bags capacity remains same
    exclude = knapsack(wts, prices,N-1,W);

    return max(include, exclude);


}


//bottom up DP
//recursions base case is assigment in dp
//each item have oe copy
int knapsackDP(vector<int> wts, vector<int> prices,int N,int W){

int dp[100][100];

for(int i=0;i<= N;i++){
    for(int w=0; w<=W;w++){

        if(i==0 || w==0) dp[i][w] = 0;

        else{
            int inc = 0, exc = 0;
            
            //including price 
            if(wts[i-1]<=w)
                inc = prices[i-1] + dp[i-1][w - wts[i-1]];
                
                //excluding price
                exc = dp[i-1][w];
            

            dp[i][w] = max(inc, exc);
        }



    }
}

return dp[N][W];

}


///if each item available infinte number of time
//unbounded knapsack

int knapsackDP(vector<int> wts, vector<int> prices,int N,int W){

int dp[100][100];

for(int i=0;i<= N;i++){
    for(int w=0; w<=W;w++){

        if(i==0 || w==0) dp[i][w] = 0;

        else{
            int inc = 0, exc = 0;
            
            //including price 
            if(wts[i-1]<=w)
                inc = prices[i-1] + dp[i][w - wts[i-1]];
                
                //excluding price
                exc = dp[i-1][w];
              

            dp[i][w] = max(inc, exc);
        }



    }
}

return dp[N][W];

}




int main(){

    int N = 4;
    vector<int> wts = {2,7,3,4};
    vector<int> prices = {5,20,20,10};
    int bag_capacity = 11;
    cout<<knapsackDP(wts, prices,N,bag_capacity)<<endl;



    return 0;
}