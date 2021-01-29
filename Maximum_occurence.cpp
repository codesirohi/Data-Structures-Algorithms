#include<bits/stdc++.h>
using namespace std;


int main(){


    string str;
    getline(cin,str);

    map<char,int> mp;

    for(auto& i: str) mp[i]++;
        

    int maxi = 0;
    char key;

    for(auto& i : mp){
        
        if(i.second>maxi)
        {
            maxi = i.second;
            key = i.first;
        }

    }

    cout<<key<<" "<<maxi<<endl;

    

    return 0;
}