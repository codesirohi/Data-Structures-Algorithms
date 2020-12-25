#include<bits/stdc++.h>
using namespace std;

void printFreq(vector<int> arr)
{

    map<int,int> freq;
    int key,max = 0;

    sort(arr.begin(), arr.end());
    for(int i=0; arr[i]; i++)
    {
        if(freq.find(arr[i]) == freq.end())
        {
            freq[arr[i]] = 1;
        }
            
        else
        {
            freq[arr[i]]++;
        }
        
    }
    
    for(auto& x : freq)
    {
        //cout<<x.first<<" - "<<x.second<<endl;
        if(x.second > max)
        {
            max = x.second;
            //key = x.first;
        }

    }
    cout<<"Most Frequent elements are: ";
    for(auto& x : freq)
    {
        while(x.second--){
            cout<<x.first<<" ";
        }
        
        //cout<<x.first<<" - "<<x.second<<endl;
        //if(x.second == max)
        //{
        //    cout<<x.first<<" ";
            
        //}

    }

    
}
        


int main()
{
    
    int n;
    cin>>n;
    vector<int> arr;
    
    for(int i=0; i<n; i++)
    {

        int temp;
        cin>>temp;
        arr.push_back(temp);

    }
    
    printFreq(arr);
    return 0;

}