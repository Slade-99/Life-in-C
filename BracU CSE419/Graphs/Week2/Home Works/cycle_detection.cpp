
// edges are equal to the number of nodes for this example

// Unweigthed adjacency list declared of size N

// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
vector<int> graph[N];
vector<bool> visited(N, false);



bool DFS(int u,int p) {

  // cout<<u<<"Node: "<<depth[u]<<endl;
  visited[u] = true;
    
 bool cycle = false;
  // Part 1

  for (auto v : graph[u]) {
    
    
   
    
    if (v != p) {

      if(visited[v]){
        return true;
      }
        else{
      // Part 2
      
      
      cycle |= DFS(v,u);
       
      
        }
    
      // Part 3

     }
    
    
    }
  
  
  
  

  return cycle;

  // Part 4


}



int main() {

  // Taking Graph input
  freopen("input.txt", "r", stdin);
  int n;
  cin >> n;
  for (int i = 1; i <=n; i++) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  
    bool x = DFS(1,-1);

  
    cout<<x<<endl;

  return 0;
}
