//optimised max sum of a sub array problem
// cumilative sum


#include<iostream>
using namespace std;

int main(){

cin>>n;
int a[1000];
int cumSum[100]={0};
int curSum =0;
int maxSum =0;

for(int i=0;i<n;i++)
{
    cin>>a[i];
}

for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {   curSum = 0;
            for(int k=i;k<=j;k++)
            {
                //cout<<a[k]<<',';
                curSum += a[k];


            }
            cout<<curSum<<endl;

            // update max sum if current sum > max sum
            //if(curSum > maxSum)
            //{
            //    maxSum = curSum;
            //    left = i;
            //    right = j;
            //}
            
        }
    }   

//cout<<endl<<maxSum<<endl;
return 0;

}