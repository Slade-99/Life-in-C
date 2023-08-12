// weigthed adjacency list declared of size N
// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
vector<pair<int, int>> graph[N + 1];
vector<pair<int, int>> PQ;
bool visited[N];
int parent[N];
vector<int> dist(N,9999);

void Dijkstra(int s) {

  dist[s] = 0;
  PQ.push_back(make_pair(dist[s], s));
  visited[s] = true;

  while ((PQ.size()) > 0) {

    sort(PQ.begin(), PQ.end());
    int u = PQ[0].second;
    //cout << u << endl;
    visited[u] = true;
    PQ.erase(PQ.begin());

    for (auto v : graph[u]) {

      if (!visited[v.first]) {

        if(((dist[v.first]>dist[u]) && (dist[v.first]>v.second))){  
        
        
        if(dist[u]<v.second){
        dist[v.first] =  v.second;
        parent[v.first] = u;
        PQ.push_back(make_pair(dist[v.first], v.first));
        }else{

        dist[v.first] =  dist[u];
        parent[v.first] = u;
        PQ.push_back(make_pair(dist[v.first], v.first));

        }
        }

      }
    }
  }
}



int main() {

  // Taking Graph input
  freopen("input.txt", "r", stdin);
  int n,e; cin>>n>>e;

  for(int i=0;i<e;i++) {

    int a, b, c; cin >> a >> b >> c;
    graph[a].push_back(make_pair(b, c));
  }

  Dijkstra(1);

  
    cout<<dist[n]<<endl;

  return 0;
}