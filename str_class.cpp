#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    string s("hello world");
    cout<<s <<endl;

    string s2 = "second way";
    cout<<s2 <<endl;
    cout<<s2.length()<<endl;
    for(int j=0; j<s2.length();j++)
    {
        cout<<s2[j]<<",";
    }

    string s3;
    getline(cin,s3);

    string arr[] = {"boys","girls","trans","pan","cis"};
    sort(arr,arr+5);
    
    //for(int i=0; i<4; i++)
    //{
    //    cout<<arr[i]<<endl;
    //}
    
    return 0;
}