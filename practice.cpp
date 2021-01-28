#include<bits/stdc++.h>
using namespace std;


int main(){


    string str;
    cin>>str;

    map<char,int> mp;

    for(auto& i: str) mp[i]++;
        // if(mp.find(i)!=mp.end()){
        //     mp[i]++;
        // }
        // else{
        //     mp[i] = 1;
        // }

    int maxi = 0;
    char key = 0;

    for(auto i : mp){
        cout<<i.first<<" "<<i.second<<endl;
        
        // if(i.second>maxi){
        //     maxi = i.second;
        //     key = i.first;
        // }

    }

    cout<<key<<" "<<maxi<<endl;

    

    return 0;
}