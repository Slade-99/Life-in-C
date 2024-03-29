
// DSU (Path Compression)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int root[N];
int rk[N];

int find(int x) {
  if (x == root[x]) {
    return x;
  } else {
    root[x] = find(root[x]);
    return find(root[x]);
  }
}

void uni(int x, int y) {
  int rx = find(x);
  int ry = find(y);
  if (rx != ry) {
    if (rk[rx] > rk[ry]) {
      root[ry] = rx;
    } else if (rk[rx] < rk[ry]) {
      root[rx] = ry;
    } else {
      root[ry] = rx;
      rk[rx]++;
    }
  }
}

int main() {

  // Taking  input edges
  freopen("input.txt", "r", stdin);
  int n;
  cin >> n; // 'n' denotes number of nodes.
  int a, b; // edges

  for (int i = 0; i < N; i++) {
    root[i] = i;
  }

  while (cin >> a >> b) {
    uni(a, b);
  }

  vector<int> answers_2;
  set<int> answer;
  for (int i = 1; i <= n; i++) {
    answer.insert(root[i]);
  }
  int z = answer.size()-1;
  cout << z << endl;

  for (auto i : answer) {
    answers_2.push_back(i);
  }

  while (z--) {
    cout << answers_2[0] << " " << answers_2[z+1] << endl;
  }

  return 0;
}
