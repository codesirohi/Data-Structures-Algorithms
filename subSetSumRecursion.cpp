#include <bits/stdc++.h>
using namespace std;

void helper(int number){
    if(number>0){

        
        helper(number-1);
        cout<<number<<" ";
    }
    else 
        return;

}

int main()
{

    helper(10);
    cout<<endl;

    return 0;
}