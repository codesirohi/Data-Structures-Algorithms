#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;

int main()
{

    unordered_map<string, int> m;

    //insert
    m.insert(make_pair("Apple",120));

    //check if key "Apple" is present
    //m.count return either 0 or 1 
    if(m.count("Apple")==1){
        cout<<"price of apple is "<< m["Apple"]<<endl;
    }

    if(m.count("Ape")==0){
        cout<<"ape not found ";
    }

    //deletion function
    m.erase("Apple");

    //iterator to search (*f) is the price of the apple
    auto f = m.find("Apple");
    if(f!= m.end()){
        cout<<"price o the apple"<<(f-> second)<<endl;
        //*f is a pair , (f-> second) gives the price , (f-> first) gives the name
    }
    else{
        cout<<"Apple does not exist"<<endl;
    }

    return 0;
}


