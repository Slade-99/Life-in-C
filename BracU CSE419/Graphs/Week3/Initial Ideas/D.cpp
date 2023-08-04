
// Unweigthed adjacency list declared of size N
// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
const int N= 1e6+10;
vector < pair<int,int>> graph[N+1];
vector <pair<int,int>> PQ;
bool visited[N];
int parent[N];
int dist[N];








void Dijkstra(int s){

  PQ.push_back(make_pair(dist[s],s));
  visited[s] = true;
  


while((PQ.size())>0)
{
  
  
  int u = PQ[0].second;
  PQ.erase(PQ.begin());

    for(auto v: graph[u]){
      
        if(!visited[v.first]){
            
        dist[v.first] = dist[u] + v.second;
        parent[v.first] = u;
        PQ.push_back(make_pair(dist[v.first],v.first));
        visited[v.first] = true;
        sort(PQ.begin(),PQ.end());
        }
    }




}




    
}








int main(){

// Taking Graph input
  freopen("input_2.txt","r",stdin);
  int a,b,c; 
  
  while(cin>>a>>b>>c)
  {
    
    graph[a].push_back(make_pair(b,c));
    graph[b].push_back(make_pair(a,c)); 
    }

  Dijkstra(8);

  cout<<dist[6]<<endl;

  return 0;
}





