
// For k copies of each node


#include <bits/stdc++.h>
using namespace std;

int main() {
  // adjacency list for unweighted

  freopen("input.txt", "r", stdin);

  int N, K;
  cin >> N >> K;

  vector<pair<int, int>> graph[N * K];

  int a, b, c;
  while (cin >> a >> b >> c) {

    for (int i = 0; i < K; i++) {
      graph[a * K + i].push_back(make_pair(b, c));
    }

    for (int i = 0; i < K; i++) {
      graph[b * K + i].push_back(make_pair(a, c));
    }
  }

  int m = 0;
  while (m < N) {
    for (int i = 0; i < K; i++) {
      cout << "Node " << m << "_" << i << ":";
      for (auto j : graph[i + m * K]) {
        cout << j.first << "," << j.second << " ";
      }

      cout << endl;
    }
    m++;
    cout << endl;
  }


  return 0;
}
