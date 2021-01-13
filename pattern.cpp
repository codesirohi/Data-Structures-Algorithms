#include<bits/stdc++.h>
using namespace std;

int main(){

   vector<int> vec ={12,23,34,45,56,67,78};

   for(int &it : vec )
   {
      it+=1;
      cout<< it<<" ";
    }


    return 0;
}
