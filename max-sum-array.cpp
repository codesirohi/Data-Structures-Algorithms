#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k,curSum = 0,maxSum = 0;
    int left = 0;
    int right = 0;

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
        {   curSum = 0;
            for(k=i;k<=j;k++)
            {
                //cout<<a[k]<<',';
                curSum += a[k];


            }
            // update max sum if current sum > max sum
            if(curSum > maxSum)
            {
                maxSum = curSum;
                left = i;
                right = j;
            }
            
        }
    }   
    
    cout<<"max-sum of sub array of given array is : "<<maxSum<<endl;
    
    for(int k = left; k<= right; k++ )
    {
        cout<<a[k]<<',';
    }
    cout<<endl;
    return 0;
}
