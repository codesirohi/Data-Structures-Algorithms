//list<int> *l = new list<int>[v];
//this says there is a pointer to array whose size is v
// and every object is a list of integer

#include<bits/stdc++.h>
using namespace std;

template<typename T>;
class Graph{

    map<T,list<T>> adjList;
    

public:
    Graph(){
        

    }

    void addEdge(T u,T v, bool bi= true){
         
        //adjList[u] gives a list
        adjList[u].push_back(v);
         if(bi){

             adjList[v].push_back(u);

         }


    }

    void printAdjList(){
        //iterate over a map
        for(auto i : adjList){
            cout<<i.first<<"-> ";
            //i.first is the key
            //i.second have the LL stored
            for(int j: i.second){
                
                cout<<j<<", ";
            }
            cout<<endl;
        }

    }
};

int main(){

    //we dont havr to specify how many vertices
    //this graph will have bacause hash maps are dynamic
    
    Graph g;

    g.addEdge("Putin","Trump",false);
    g.addEdge("Putin","Modi",false);
    g.addEdge("Putin","Trump",false);
    g.addEdge("","");
    g.addEdge("","");
    
    g.printAdjList();


    return 0;
}