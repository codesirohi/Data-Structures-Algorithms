#include<iostream>
using  namespace std;

bool isSorted(int *a,int n){
    if(n==1){
        return true;
    }
    if(a[0]<a[1] && isSorted(a+1,n-1)){
        return true;
    }
    return false;
}

int main()
{
    int arr1[]={3,6,1,2,9,6};
    int arr2[]={1,2,3,4,5,6};
    int k = 6;
    if(isSorted(arr1,k)){
        cout<<"is sorted "<<endl;
    }
    else
    {
        cout<<"not sorted"<<endl;
    }

    return 0;
    
}