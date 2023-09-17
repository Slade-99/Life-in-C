#include <bits/stdc++.h>
#include <queue>
using namespace std;

const int N = 1e7 + 10;
vector <pair<int,int >>  graph[N + 1];



vector <pair<int,int>> graph2[100000];


int edges[N+1];
priority_queue <pair <long long, int>, vector<pair<long long, int> >, greater<pair<long long, int> > > PQ;  // Using an imported library to make computations faster
bool visited[N];
bool visited2[N];
vector<long long> dist(N,1e18);
vector<long long> dist2(N,1e18);

void DJ(long long s) {

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


void DJ2(long long s) {

    dist2[s] = 0;
  PQ.push({dist2[s], s});
  visited2[s] = true;

  while (!PQ.empty()) {

    auto now = PQ.top();
    long long u = now.second;
    
    visited2[u] = true;
    PQ.pop();

    
    if(now.first <=  dist2[u]){    //Providing some optimization
    for (auto v : graph2[u]) {
      if (!visited2[v.first]) {
         if((dist2[u] + v.second)<dist2[v.first]){
        dist2[v.first] = dist2[u] + v.second;
        PQ.push({dist2[v.first], v.first});
        }
      }
    }
    }
  
  
  
  
  }
}








int main(){

// Taking Graph input
//freopen("input.txt","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,m; cin>>n>>m;
  
    
  
  int j =0;
  for(int i=0;i<m;i++)
  {
    int  a,b,c; cin>>a>>b>>c;
    
    
    edges[j] = a;
    edges[j+1] = b;
    edges[j+2] = c;
    graph[a].push_back(make_pair(b,c));
    graph2[b].push_back(make_pair(a,c));
    j = j+3;
  
    }
  
 
  
  
  DJ(1);

  DJ2(n);


  j = 0;
  long long final = 1e18;
  for(int i=0;i<m; i++){
    int a = edges[j];
    int b = edges[j+1];
    int c = edges[j+2];

    long long z = dist[a] + dist2[b] + c/2;
    
    final = min(final,z);
    j+=3;
  }

cout<<final<<endl;



  return 0;
}





