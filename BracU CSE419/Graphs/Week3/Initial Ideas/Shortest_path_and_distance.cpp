
// Unweigthed adjacency list declared of size N
// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
const int N= 1e6+10;
vector <int>  graph[N];
vector <int> Q;
bool visited[N];
int parent[N];
int dist[N];

void BFS(int s){

  Q.push_back(s);
  visited[s] = true;
  

while((Q.size())>0)
{
  
  
  int u = Q[0];
  Q.erase(Q.begin());

    for(auto v: graph[u]){
        if(!visited[v]){
        Q.push_back(v);
        visited[v] = true;
        dist[v] = dist[u] + 1;
        parent[v] = u;
        }
    }




}




    
}








int main(){

// Taking Graph input
  freopen("input.txt","r",stdin);
  int n; cin>>n;
  
  for(int i=1 ; i<n ; i++)
  {
    int a,b; cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a); 
    }

    

  // Starting the BFS
    int source,destination; cin>>source>>destination;
    BFS(source);





 
 // Finding the Shortest path from the start(which is set to 1) to the destination(which is set to 9)
    

    

    vector <int> track;
    int x = destination;
    while(parent[x] != 0)
    {
        
        track.push_back(x);
        x = parent[x];
    } 
    track.push_back(1);


    reverse(track.begin(),track.end());
    cout<<"Shortest path from "<<source<<" to "<<destination<<" is: "<<endl;
    for(auto i: track){
        cout<<" "<<i;
    }
    cout<<endl;

    cout<<" Length of the shortest path is: "<<dist[destination]<<endl;

    
  return 0;
}





