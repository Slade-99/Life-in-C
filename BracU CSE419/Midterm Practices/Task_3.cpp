#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
vector<int> g[N];
bool visited[N];
int depth[N];



void graph_input()
{
        int v;
        cin>>v;
        for(int i=1; i<v ; i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }      
}




void DFS(int u)
{
    cout<<"Depth of node "<<u<<" is: "<<depth[u]<<endl;
    visited[u] = true;
    for(auto v: g[u]){
        
        if(!visited[v]){
        depth[v] = depth[u]+1;
        DFS(v);
        }
    
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("input.txt","r",stdin);

    graph_input();
    
    DFS(1);
    
    return 0;
}