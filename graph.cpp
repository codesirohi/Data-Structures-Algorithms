//list<int> *l = new list<int>[v];
//this says there is a pointer to array whose size is v
// and every object is a list of integer

#include<bits/stdc++.h>
using namespace std;

class Graph{

    int V;
    list<int> *l ;

public:
    Graph(int v){
        V = v;
        //a new array of  of size V of linked lists
        l = new list<int>[V];

    }

    void addEdge(int u, int v, bool bi= true){
         
         l[u].push_back(v);
         if(bi){

             l[v].push_back(u);

         }


    }

    void printAdjList(){

        for(int i=0;i<V;i++){
            cout<<i<<"-> ";
            //l[i] is linked list of
            for(int vertex: l[i]){
                
                cout<<vertex<<", ";
            }
            cout<<endl;
        }

    }
};

int main(){

    //a graph with 5 vertices
    //numbered from 0 to 4
    Graph g(5);

    g.addEdge(2,3,false);
    g.addEdge(0,4,false);
    g.addEdge(2,1,false);
    g.addEdge(4,2,false);
    g.addEdge(3,1,false);
    g.addEdge(1,4,false);
    g.addEdge(1,0,false);

    g.printAdjList();


    return 0;
}