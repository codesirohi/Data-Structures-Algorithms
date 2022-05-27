#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>& vec,int temp ){
    //base condition
    if(vec.size()==0 || vec[vec.size()-1] <=temp ){
        vec.push_back(temp);
        return;
    }

    int num = vec[vec.size()-1];
    vec.pop_back();

    insert(vec, temp);
    vec.push_back(num);

}

void sort(vector<int>& vec){
    //base condition
    if(vec.size() == 1){

        return;
    }

    int temp = vec[vec.size()-1];
    vec.pop_back();

    sort(vec);

    insert(vec,temp);
    return;


}


int main(){

    vector<int> numbers = {12,45,2,67,2,8,5,3,98,12};
    sort(numbers);
    for(int i: numbers){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}