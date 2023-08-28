//Shortest Routes 1

//URL of the problem // https://cses.fi/problemset/task/1671





#include <bits/stdc++.h>
#include <queue>
using namespace std;
const int N = 1e7 + 10;

vector<pair<int,int >> graph[N + 1];
priority_queue <pair <long long, int>, vector<pair<long long, int> >, greater<pair<long long, int> > > PQ;  // Using an imported library to make computations faster
bool visited[N];
vector<long long> dist(N,1000000000000000000);

void Dijkstra(long long s) {

    dist[s] = 0;
  PQ.push({dist[s], s});
  visited[s] = true;

  while (!PQ.empty()) {

    auto now = PQ.top();
    long long u = now.second;
    
    visited[u] = true;
    PQ.pop();

    
    if(now.first <=  dist[u]){    //Providing some optimization
    for (auto v : graph[u]) {
      if (!visited[v.first]) {
         if((dist[u] + v.second)<dist[v.first]){
        dist[v.first] = dist[u] + v.second;
        PQ.push({dist[v.first], v.first});
        }
      }
    }
    }
  
  
  
  
  }
}










int main(){

// Taking Graph input
//freopen("input6.txt","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
  int n,m; cin>>n>>m;
  
  for(int i=0;i<m;i++)
  {
    int  a,b,c; cin>>a>>b>>c;
  
    
    
    graph[a].push_back(make_pair(b,c));
    
    }
  
 
 
  dist[1] = 0;
  Dijkstra(1);

  for(int i=1; i<=n;i++){
    cout<<dist[i]<<"  ";
  }

  return 0;
}





