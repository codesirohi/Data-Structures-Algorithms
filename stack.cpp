#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Stack{

private:
    vector<T> v;
public:
    void push(T data) 
    {
        v.push_back(data);
    }

    bool empty()
    {
        if(v.size() ==0) return true;
        else return false;
    }
    void pop()
    {
        if(!empty()) v.pop_back();
        else cout<<"stack is emply"<<endl;
    }

    T top()
    {
        return v[v.size()-1];
    }
};

void insert_bottom(Stack<int>& s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }

    int y = s.top();
    insert_bottom(s,x);
    s.push(y);
}

void revStack(Stack<int> s){
    if(s.empty()) return;
    int x = s.top();
    s.pop();
    revStack(s);
    insert_bottom(s,x); 

} 

int main()
{
    
    int n;
    cin>>n;
    Stack<int> k;
     
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        k.enter(temp);
    }


    revStack(k);

    while(k.empty() == false){
        cout<<k.top()<<" ";
        k.pop();
    }


    return 0;
}