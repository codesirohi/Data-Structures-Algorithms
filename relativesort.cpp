#include <bits/stdc++.h>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2,int n,int m) 
    {
        unordered_map<int, int> map;
        
        for(int i = 0; i < arr2.size(); i++)
            map[arr2[i]] = 0;
        
        vector<int> extra;
        
        for(int i = 0; i < arr1.size(); i++)
            if(map.find(arr1[i]) != map.end())
                map[arr1[i]]++;
            else
                extra.push_back(arr1[i]);
        
        sort(extra.begin(), extra.end());
        
        vector<int> ans;
        for(int i = 0; i < arr2.size(); i++)
        {
            int ele = arr2[i];
            int count = map[ele];
            while(count-- > 0)
                ans.push_back(ele);
        }
        
        ans.insert( ans.end(), extra.begin(), extra.end() );  // inserting vector 'extra' towards the end of vector 'ans'
        return ans;
    }
    
    
int main() 
{
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int j;
        int k;
	    cin>>j>>k;
	    
	    vector<int> A;

	    for(int i=0;i<j;i++)
        {
            int temp;
            cin>>temp;
            A.push_back(temp);
        }

        vector<int> B;
        
        for(int i=0;i<k;i++)
        {
            int temp;
            cin>>temp;
            B.push_back(temp);
        }
	    
	    
	    relativeSortArray(A,B,j,k);
    }
	
	return 0;
}