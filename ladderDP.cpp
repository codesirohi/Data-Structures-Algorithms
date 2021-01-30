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

int waysbottomUP(int steps, int k){ 

   if(n==0) return 1;
   if(n<0) return 0;

int ans = 0; 

for(int j =1; j<=k;j++){
    ans+= waysbottomUP(steps-j,k);

}

return ans;




}

int main(){

    int steps,maxJump;
    cin>>steps;
    //here max jum is three 3
    cout<<waysRec(steps)<<endl;

    return 0;

}