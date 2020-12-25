#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;

cin>>n;

if(n==1 || n==2){

    cout<<1;
    return 0;

}

else if(n%2 ==0 ){

    n = n/2;
    cout<<pow(3,n);

}

else{

    n = n/2;
    cout<<(int)(pow(2,n));
}

return 0;

}