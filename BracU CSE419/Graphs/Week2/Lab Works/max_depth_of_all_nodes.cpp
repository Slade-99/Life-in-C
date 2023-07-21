// Unweigthed adjacency list declared of size N

// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
vector<int> graph[N];
vector<bool> visited(N, false);
vector<int> depth(N, 0);
vector<int> distance_x(N, 0);
vector<int> distance_y(N, 0);

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

void DFS_x(int u) {

  // cout<<u<<"Node: "<<depth[u]<<endl;
  visited[u] = true;

  // Part 1

  for (auto v : graph[u]) {
    if (!visited[v]) {

      distance_x[v] = distance_x[u] + 1;

      // Part 2
      DFS_x(v);

      // Part 3
    }
  }

  // Part 4
}

void DFS_y(int u) {

  // cout<<u<<"Node: "<<depth[u]<<endl;
  visited[u] = true;

  // Part 1

  for (auto v : graph[u]) {
    if (!visited[v]) {

      distance_y[v] = distance_y[u] + 1;

      // Part 2
      DFS_y(v);

      // Part 3
    }
  }

  // Part 4
}

int main() {

  // Taking Graph input
  freopen("input.txt", "r", stdin);
  int n;
  cin >> n;
  for (int i = 1; i < n; i++) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  DFS(1);
  int end_x = 1;
  int maxdepth = 0;

  for (int i = 1; i <= n; i++) {
    if (depth[i] > maxdepth) {
      maxdepth = depth[i];
      end_x = i;
    }
  }

  reset_graph();

  maxdepth = 0;
  int end_y = 1;
  DFS(end_x);

  for (int i = 1; i <= n; i++) {
    if (depth[i] > maxdepth) {
      maxdepth = depth[i];
      end_y = i;
    }
  }

  reset_graph();

  DFS_x(end_x);

  reset_graph();

  DFS_y(end_y);
  // cout<<end_x<<"  "<<end_y;

  for (int i = 1; i <= n; i++) {
    cout << max(distance_x[i], distance_y[i]) << " ";
  }
  return 0;
}
