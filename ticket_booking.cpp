#include<bits/stdc++.h>
using namespace std;

class Ticket_booking{
    
public:
    int arr[5][5] = {};

    void booking(int R, int C){

        arr[R][C] = 1; 

    }

    void avail_seat(){
        cout<<"Available seats";
        for(int i=0;i<5;i++)
            for(int j=0;j<5;j++)
                if( arr[i][j] == 0 ){
                    cout<<"Row: "<<i<<" Column: "<<j<<endl;
                } 
                     
        
    }
};

int main()
{
    Ticket_booking s;
    int i,j;
    int t;
    cin>>t;
    while(t--)
    {

    cin>>i;
    cin>>j;
    s.booking(i,j);

    }
    
    

    s.avail_seat();


    return 0;

}