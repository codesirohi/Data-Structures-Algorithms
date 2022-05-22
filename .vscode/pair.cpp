#include<bits/stdc++.h>
using namespace std;


pair<int, int> values;

pair assign(int num1, int num2){

    values.first = num1;
    values.second = num2;

    return values;
}

int main(){

    pair curr =assign(23,33);

    cout<<curr;

}