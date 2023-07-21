#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
vector<int> g[N];
bool visited[N];
int depth[N];


void graph_input(int v)
{
        for(int i=1; i<v ; i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }      
}
void reset_graph()
{
    for(int i=0; i<=N; i++){
        visited[i] = false;
        depth[i] = 0;
    }
}





void DFS(int u)
{
    
    visited[u] = true;
    for(auto v: g[u]){
        
        if(!visited[v]){
        depth[v] = depth[u] +1;
        DFS(v);
        }
    
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("input.txt","r",stdin);
    int v;
    cin>>v;
    graph_input(v);
    
    DFS(1);
    int end_x = 0;
    int max_depth = 0;
    for(int i=1; i<=v ; i++)
{
    if(depth[i]>max_depth){
        end_x = i;
        max_depth = depth[i];
    }
}    


    reset_graph();
    
    max_depth = 0;
    DFS(end_x);

    for(int i=1; i<=v ; i++)
{
    if(depth[i]>max_depth){
        end_x = i;
        max_depth = depth[i];
    }
}   

cout<<max_depth<<endl;





return 0;
}