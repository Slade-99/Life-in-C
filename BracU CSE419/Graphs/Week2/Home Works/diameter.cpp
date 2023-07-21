// Unweigthed adjacency list declared of size N

// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
vector<int> graph[N];
vector<bool> visited(N, false);
vector<int> depth(N, 0);

void reset_graph() {
  for (int i = 0; i <= N; i++) {
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
  //freopen("input.txt", "r", stdin);
  int n;
  cin >> n;
  for (int i = 1; i < n; i++) {
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


    reset_graph();

    DFS(end_x);

    end_x = 0;
    max_depth = 0;
    for(int i=1; i<n; i++){
        if(depth[i]>max_depth){
            max_depth = depth[i];
            end_x = i;
        }
    }


    cout<< max_depth<<endl;

  return 0;
}
