#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){

    if(b==0) return a;

    else return gcd(b, a%b);

}

void rev(vector<int> arr,int f,int high, int low){

    while(low<high){
        
        swap( arr[ low ], arr[ high ] );
        low++;
        high--;
    }

} 

void leftRotate(vector<int> arr, int d){
    
    int n = arr.size();
    //to handle case when d>=n;
    d = d % n;

    rev(arr, arr.begin(), d);
    rev(arr,d-n, arr.size()-1); 
    rev(arr,arr.begin(),arr.end());

}

int main(){

    int d,n;
    cin>>d>>n;
    


    return 0;
}