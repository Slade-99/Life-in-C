// Forever Winter

// URL of the problem  https://codeforces.com/problemset/problem/1829/F
 
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
vector<int> graph[N];
vector<bool> visited(N, false);
vector<int> depth(N, 0);
 
void reset_graph(int x) {
  for (int i = 0; i <=x; i++) {
    graph[i].clear();
    visited[i] = false;
    depth[i] = 0;
  }
}
 
 
 
void DFS(int u) {
 
  // cout<<u<<"Node: "<<depth[u]<<endl;
  visited[u] = true;
 
  // Part 1
 
  for (auto v : graph[u]) {
    if (!visited[v]) {
 
      depth[v] = depth[u] + 1;
 
      // Part 2
      DFS(v);
 
      // Part 3
    }
  }
 
  // Part 4
 
 
}
 
 
 
int main() {
 
  // Taking Graph input
  //freopen("input8.txt", "r", stdin);
  
  int t;cin>>t;
  while(t--){
  int n,m;
  cin >> n>>m;
  for (int i = 1; i <=m; i++) {
    int a, b;
    cin >> a >> b;

    graph[a].push_back(b);
    graph[b].push_back(a);
  }
 
  DFS(1);
  
    int end_x = 0;
    int max_depth = 0;
    for(int i=1; i<=n; i++){
        if(depth[i]>max_depth){
            max_depth = depth[i];
            end_x = i;
        }
    }
   
 
  int y = graph[graph[end_x][0]].size()  ;
  
  int x = 0;
for(auto i: graph[graph[end_x][0]]){
    if((graph[i].size()) != 1){
      
      x = graph[i].size();
      break;
    }
}
  cout<<x<<" ";
  cout<<y-1<<endl;
  reset_graph(n);
    

  }
  
  return 0;
}