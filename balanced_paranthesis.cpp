#include<bits/stdc++>
using namespace std;

void check(string str)
{
    stack<char> s;

    for(int i =0; i<str.length();i++)
    {
        if(str[i] == '(') s.push(str[i]);

        else if(str[i] == ')') 
        {
            if(s.empty())
            {
                return false;
            }

            s.pop();
        }



 
    }
}

int main(){

    stack<char> s;
    string str;
    cin>> str;
    
    
    
    return 0;

}