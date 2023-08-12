
// DSU (Path Compression)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int root[N];
int rk[N];
int edge_count[N];

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

  edge_count[rx]++;
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



  vector<int> node(n,0);
  for(int i=1;i<=n;i++){
    int n = root[i];
    node[n]++;
  }

  int result = 0;
  for(int i=1;i<=n;i++){
    if(node[i]!=0){
      int x =node[i];
      int y = edge_count[i];
      int z = (x*(x-1))/2;
      if(y==z){
        result++;
      }
    }
  }

  /*
  set<int> answer;
  for (int i = 1; i <= n; i++) {
    answer.insert(root[i]);
  }

  cout << answer.size() << endl;
  */
  cout<<result<<endl;
  return 0;
}
