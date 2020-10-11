#include<bits/stdc++.h>
using namespace std;

vector<int> ar[100];
int in[101] , low[101] , vis[101];
int timer;


void dfs(int node, int par){
    vis[node] = 1;
    in[node] = low[node] = timer;
    timer++;

    for(int child : ar[node])
    {
        if(child == par)continue;
        if(vis[child] == 1) 
        {
            //backedge
            low[node] = min(low[node],in[child]);
        }
        else{
            //froward edge
            dfs(child, node);

            if(low[child] > in[node]){
                cout<<node<<" - "<<child is a bridge \n;
                low[node] = min(low[node],in[child]);
            }
             
             
        }
    }
}

int main()
{
    setTextSize();

    int n,n,x,y;
    cin>>n>>m;

    while(m--){
        cin>>x>>y, ar[x].push_back(y), ar[y].push_back(x);

        dfs(1, -1);


    }

}