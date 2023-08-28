// Unweigthed adjacency list declared of size N
 
// (Starting node is assumed ot be one and numbered sequentially)
 
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
vector<int> graph[N];
vector<int> graph2[N];
vector<int> visited(N, 0);
vector<int> depth(N, 0);
vector<int> parent(N, 0);
int h =0;
int l =0;

void reset_graph(int x) {
  for (int i = 0; i <=x; i++) {
    graph[i].clear();
    visited[i] = false;
    depth[i] = 0;
  }
}

void reset_graph2(int x) {
  for (int i = 0; i <=x; i++) {
    graph2[i].clear();
    visited[i] = 0;
    depth[i] = 0;
  }
}
 
 
 
void DFS(int u) {
 
  // cout<<u<<"Node: "<<depth[u]<<endl;
  visited[u] = 1;
 
  // Part 1
 
  for (auto v : graph[u]) {
    if (visited[v]==0) {
 
      depth[v] = depth[u] + 1;
      parent[v] = u;
      // Part 2
      DFS(v);
 
      // Part 3
    }
  }
  
  visited[u] = 2;
  // Part 4
 
}


void DFS2(int u) {
 
  // cout<<u<<"Node: "<<depth[u]<<endl;
  visited[u] = 1;
 
  // Part 1
 
  for (auto v : graph2[u]) {
    
    if(visited[v]==1 && parent[u]!=v){
      
      l++;
    }
    
    if (visited[v]==0) {
 
      depth[v] = depth[u] + 1;
      parent[v] = u;
      // Part 2
      DFS2(v);
 
      // Part 3
    }
  }
  
  visited[u] = 2;
  // Part 4
 
}
 
 
 
int main() {
 
  // Taking Graph input
  //freopen("input9.txt", "r", stdin);
  
  int t;cin>>t;
  while(t--){
  
  

  
  int n;
  cin >> n;
  for (int i = 1; i <=n; i++) {
    int a;cin>>a;
    

    graph[i].push_back(a);
    graph[a].push_back(i);
    graph2[i].push_back(a);
  }
 


  for(int i=1;i<=n;i++){
    if(visited[i]==0){
        DFS(i);
        h++;
    }
  }
  

  

  reset_graph(n);


  for(int i=1;i<=n;i++){
    if(visited[i]==0){
        DFS2(i);
        
    }
  }


  
  
  if(l==0){
    l++;
  }else if(l<h){
    l++;
  }
  
  
  cout<<l<<" "<<h<<endl;
  
  
  reset_graph2(n);
  l =0;
  h =0;


  
  }
  
  return 0;
}