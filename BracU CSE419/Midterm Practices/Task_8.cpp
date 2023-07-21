#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
vector<int> g[N];
bool visited[N];


void graph_input(int v)
{
    int a,b;
    while(cin>>a>>b)
    {
        
        
        g[a].push_back(b);
        g[b].push_back(a);
    }      
}




void DFS(int u)
{
    cout<<u<<" ";
    visited[u] = true;
    for(auto v: g[u]){
        
        if(!visited[v]){
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
    
    int num_of_components = 0;
    for(int i=1; i<=v ; i++){
        if(!visited[i]){
            num_of_components += 1;
            cout<<"Component "<<num_of_components<<": ";
            DFS(i);
            cout<<endl;
            
        }
    }
    
    return 0;
}