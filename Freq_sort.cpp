#include <bits.stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> A;
        
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            A.push_back(temp);
            
        }
        sort(A.begin(),A.end());
        
        map<int,int> freq;
        
        for(int i=0; i<n;i++)
            freq[A[i]]++;
        
        
        
        for(int i=0; i<n;i++)
            cout<<freq[A[i]];
        
        
    }
        
    
    
    
	
	
	
	return 0;
}