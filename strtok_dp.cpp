#include<iostream>
#include<cstring>
using namespace std;
char *mystrtok(char str[],char delim)
{
    static char*input = NULL;
    if(str!=NULL)
    {
        input = str;
    }
    char *output = new char [strlen(input)+1];

    for(int i=0; input[i]!='\0';i++)
    {
        if(input[i]!=delim)
        {
            output[i]=input[i];

        }
        else
        {
            output[i] = '\0';
            input = input + i + 1;
            return output;

        }
         
    }

}



int main(){

    char str[] = "hi my name is shubham, okay !";

    char *ptr;

    ptr = strtok(str," ");
    cout<<ptr<<endl;

    ptr = strtok(NULL," ");
    cout<<ptr<<endl;
    
    ptr = strtok(NULL," ");
    cout<<ptr<<endl;


    return 0;

}
    
