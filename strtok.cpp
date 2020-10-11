#include<iostream>
#include<cstring>
using namespace std;
int main(){

    char str[] = "hi my name is shubham, okay !";

    char *ptr;

    ptr = strtok(str," ");

    while (ptr!=NULL)
    {
        cout<<ptr<<endl;
        ptr = strtok(NULL," ");
    }
    

    return 0;

}
    
