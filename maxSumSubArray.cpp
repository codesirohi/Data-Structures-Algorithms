// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    long long maximumSumSubarray(int K, vector<int> &Arr , int N){
        
        
        long long MaxSum = Arr[0];
        long long CurSum = 0;
        
        int first = 0; 
        int second = 0;
        
        // code here 
        while( second < N ){
            
            CurSum += Arr[ second ];
            
            if( second - first + 1 < K )
                second++;
                
            
            else if( second - first + 1 == K )
            {
                
                MaxSum = max( MaxSum , CurSum );
                CurSum -= Arr[ first ];
                
                first++;
                second++;
                
            }
            
            
        }
        
        return MaxSum;
        
    }
};
