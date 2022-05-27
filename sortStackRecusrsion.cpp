#include <bits/stdc++.h>
using namespace std;

void insert(stack<int>& stcc, int temp)
{

    // base case
    if (stcc.size() == 0 || stcc.top() <= temp)
    {

        stcc.push(temp);
        return;
    }

    // recursive case
    int last = stcc.top();
    stcc.pop();
    insert(stcc, temp);
    stcc.push(last);
}

void sort(stack<int>& stcc)
{

    // base case
    if (stcc.size() == 1)
    {
        return;
    }

    // recursive case
    int temp = stcc.top();
    stcc.pop();
    sort(stcc);
    insert(stcc, temp);
}

int main()
{
    stack<int> stcc;
    stcc.push(98);
    stcc.push(12);
    stcc.push(21);
    stcc.push(1);
    stcc.push(15);
    stcc.push(101);
    cout<<stcc.size()<<" ";
    sort(stcc);
    cout<<stcc.top()<<" ";
    


    // for(int i = 0; i<stcc.size(); i++){
    //     cout<<stcc.top()<<" ";
    //     stcc.pop();
    // }
    cout<<endl;

    return 0;
}