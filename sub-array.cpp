#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;
    int a[10];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //generate all sub arrays
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
                cout<<a[k]<<',';
        

            }
            cout<<endl;
        }
    }
    return 0;
}
