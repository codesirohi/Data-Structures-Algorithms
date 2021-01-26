#include<bits/stdc++.h>
using namespace std;


void partition(vector<int> vec,int start,int end){

    

    int pivot = vec[end];
    int pIndex = start; //*vec.begin()


    for(auto i : vector){
        if(i<=pivot){
            swap( i , vec[pIndex] );
            pIndex++;
        }
    }
    swap(vec[pIndex],vec[end]);
    return pIndex;
}

void quicksort(vector<int> vec,int start,int ){

    

    if(start<end){

        int pIndex = partition(vec,0,vec.size()-1);

        quicksort(vec,0,pIndex-1);
        quicksort(vec,pIndex+1,vec.size()-1);
    }

}

int main(){

    

    return 0;
}