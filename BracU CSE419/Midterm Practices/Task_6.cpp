#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
vector<int> g[N];
bool visited[N];
vector<int> ansc[N];

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

void find_LAC_of(int x, int y){
    int length = max( (ansc[x].size())  ,  (ansc[y].size())  ) ;

    for(int i=0 ; i<length; i++){
        if(ansc[x][i]!=ansc[y][i]){
            cout<<ansc[x][i-1];
            break;
        }
    }

    for(int i=length; i>0; i--){

    }
}


void DFS(int u)
{
    
    visited[u] = true;
    for(auto v: g[u]){
        
        if(!visited[v]){
        
        for(auto i: ansc[u]){
            ansc[v].push_back(i);
        }
        ansc[v].push_back(u);
        
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
    
    



  find_LAC_of(10,11);
}