// Unweigthed adjacency list declared of size N
// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
vector<int> graph[N];
bool visited[N];
int parent[N];
int dist[N];
vector<int> Q;

void BFS(int s) {

  Q.push_back(s);
  visited[s] = true;
  //cout << " " << s;

  while ((Q.size()) > 0) {

    int u = Q[0];
    
    Q.erase(Q.begin());

    for (auto v : graph[u]) {
      if (!visited[v]) {
        dist[v] = dist[u] + 1;
        Q.push_back(v);
        visited[v] = true;
        parent[v] = u;
        
        //cout << " " << v;
      }
    }
  }
}




void print_path(int source, int destination){
  vector<int> results;
  
  int x = destination;
  cout<<"Destination is: "<<destination<<endl;
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
  freopen("input.txt", "r", stdin);

  int a, b;
  while (cin >> a >> b) {

    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  // Starting the BFS
  BFS(1);


  /*
  vector<int> results;
  int destination = 5;
  int x = destination;
  while(parent[x]!=0){
    results.push_back(x);
    x = parent[x];
  }
  results.push_back(4);
  reverse(results.begin(),results.end());

  for(auto i: results){
    cout<<i<<endl;
  }
  */

  for(int i=2 ; i<=6; i++){
  print_path(1,i);
  
  }


  

  return 0;
}
