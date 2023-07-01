/*

This is used for a graph where the number of Nodes and Edges are not given in the input but
nodes are ordered serially upto maximum


*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  // adjacency matrix for unweighted

  freopen("input.txt", "r", stdin);

  vector<int> inputs;

  int a, b;
  while (cin >> a >> b) {
    inputs.push_back(a);
    inputs.push_back(b);
  }

  int E = (inputs.size()) / 2;

  int N = 0;
  for (auto i : inputs) {
    if (i > N) {
      N = i;
    }
  }

  int graph[N + 1][N + 1];

  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N; j++) {
      graph[i][j] = 0;
    }
  }

  for (int i = 0; i < (E * 2); i += 2) {

    graph[inputs[i]][inputs[i + 1]] = 1;
    graph[inputs[i + 1]][inputs[i]] = 1;
  }



  
  for (int i = 1; i <= N; i++) {

    for (int j = 1; j <= N; j++) {
      cout << graph[i][j] << " ";
    }

    cout << endl;
  }

  return 0;
}
