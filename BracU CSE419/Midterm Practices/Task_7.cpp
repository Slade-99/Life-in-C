#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
vector<int> g[N];
bool visited[N];


void graph_input()
{
        int v,e;
        cin>>v,e;
        for(int i=1; i<=e ; i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
    }      
}




bool DFS(int u, int p)
{
    bool cycle = false;
    visited[u] = true;
    for(auto v: g[u]){
        
        if(v!=p){
        if(visited[v]){
            return true;
        }
        cycle = cycle || DFS(v , u);
        }
    }


    return cycle;

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("input.txt","r",stdin);

    graph_input();
    
    bool x = DFS(1,-1);
    
    if(x){
        cout<<"cycle detected";

    }else{
        cout<<"no cycles";
    }
    return 0;
}