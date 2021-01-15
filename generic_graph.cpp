//list<int> *l = new list<int>[v];
//this says there is a pointer to array whose size is v
// and every object is a list of integer

#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    //using map output will be sorted
    map<T,list<T>> adjList;
    

public:

    //Graph_constructor 
    Graph(){
        

    }

    void addEdge(T u,T v, bool bi= true){
         
        //adjList[u] gives a list
        adjList[u].push_back(v);
         if(bi){

             adjList[v].push_back(u);

         }


    }

    void bfs(T src){
        //a queue 
        queue<T> q;
        //a hash map to maintain which nodes have been visited
        map<T,bool> visited;

        //pushed the source node in the queue
        q.push(src);
        //marked the source node as visited in the map
        visited[src] =  true;

        while(!q.empty()){

            T node = q.front();
            cout<<node<<" ";
            q.pop();

            //for the neighbors of the node
            //check for the nodes which are not visited

            for(T neighbour : adjList[node]){
                //if the neighbour is not in the map " visited"
                //push it into the queue
                if(!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
                

            }
        }



    }

    void printAdjList(){
        //iterate over a map
        for(auto i : adjList){
            cout<<i.first<<"-> ";
            //i.first is the key
            //i.second have the LL stored
            for(auto j: i.second){
                
                cout<<j<<", ";
            }
            cout<<endl;
        }

    }
};

 

int main(){

    //we dont havr to specify how many vertices
    //this graph will have bacause hash maps are dynamic
    
    Graph<int> g;


    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,4);
    g.addEdge(2,4);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(3,4);
    
    
    g.bfs(0);
    cout<<endl;


    return 0;
}