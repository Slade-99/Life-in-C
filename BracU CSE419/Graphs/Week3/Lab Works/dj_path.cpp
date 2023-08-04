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

        if((dist[u] + v.second)<dist[v.first]){
        dist[v.first] = dist[u] + v.second;
        parent[v.first] = u;
        PQ.push_back(make_pair(dist[v.first], v.first));}
        // visited[v.first] = true;
        // sort(PQ.begin(), PQ.end());
      }
    }
  }
}

void print_path(int source, int destination){
  vector<int> results;
  
  int x = destination;
  cout<<"Destination is: "<<destination<<endl;
  cout<<"Path is: ";
  while(parent[x]!=0)
  {
    results.push_back(x);
    x = parent[x];
  }
  
  results.push_back(source);
  reverse(results.begin(),results.end());

  for(auto i: results)
  {
    cout<<i<<" ";
  }

  cout<<endl;
  cout<<"Distance of this path is: "<<dist[destination]<<endl;
  cout<<endl;


}

int main() {

  // Taking Graph input
  freopen("input_2.txt", "r", stdin);
  int a, b, c;

  while (cin >> a >> b >> c) {

    graph[a].push_back(make_pair(b, c));
    graph[b].push_back(make_pair(a, c));
  }

  Dijkstra(1);

  
  for(int i=2 ; i<=6; i++){
  print_path(1,i);
  
  }

  return 0;
}