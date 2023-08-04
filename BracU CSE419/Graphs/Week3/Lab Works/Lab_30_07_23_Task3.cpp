// Unweigthed adjacency list declared of size N

// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
vector<int> graph[N];
vector<bool> visited(N, false);
vector<int> depth(N, 0);
vector<int> parent(N,0);

void reset_graph() {
  for (int i = 0; i <= N; i++) {
    visited[i] = false;
    depth[i] = 0;
    parent[i] = 0;
  }
}

void DFS(int u) {

  // cout<<u<<"Node: "<<depth[u]<<endl;
  visited[u] = true;
  
  // Part 1

  for (auto v : graph[u]) {
    if (!visited[v]) {

      depth[v] = depth[u] + 1;
      parent[v] = u;
      // Part 2
      DFS(v);

      // Part 3
    }
  }

  // Part 4
}

int main() {

  // Taking Graph input
  freopen("input3.txt", "r", stdin);
  int n,r;
  cin >> n>>r;
  for (int i = 1; i < n; i++) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  DFS(r);

  int end_x = 0;
  int max_depth = 0;
  for (int i = 1; i <= n; i++) {
    if (depth[i] > max_depth) {
      max_depth = depth[i];
      end_x = i;
    }
  }

  reset_graph();

  DFS(end_x);

  int end_y = 0;
  max_depth = 0;
  for (int i = 1; i < n; i++) {
    if (depth[i] > max_depth) {
      max_depth = depth[i];
      end_y = i;
    }
  }

  
  cout<< end_x <<" and "<<end_y<<" are the two farthest nodes" ;
  
  return 0;
}