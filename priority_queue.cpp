#include<bits/stdc++.h>
using namespace std;



int main(){
    //by default priority queue makes 
    //max heap
    //priority_queue<int> pq;   <--- this is for max heap size

    //for min heap    // "greater<int>" <--- this is a comparator
    priority_queue<int,vector<int>,greater<int>> pq1;
   

    int s; 
    cin>>s;
    
    //insert in queue
    while(s--){

        int temp;
        cin>>temp;
        pq.push(temp);
    } 

    


    while(!pq.empty()){

        cout<<pq.top()<<", ";
        
        pq.pop();

    }
    cout<<endl;

    return 0;
}
