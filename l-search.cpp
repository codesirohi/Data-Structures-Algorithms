#include<iostream>
using  namespace std;

int main()
{   
    int n;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    int num;
    cin>>num;

    int i;
    for(i=0;i<n;i++)
    {
        if (num==ar[i])
        {
            cout<<endl;
            cout<<"found the element at index : "<<i<<endl;
            break;
        }
        
    }
    if(i==n)
    {
        cout<<"element not found";
    }

    
    return 0;
}


