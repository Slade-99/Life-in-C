// Message Route

//URL of the problem // https://cses.fi/problemset/task/1667





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
  //freopen("input3.txt","r",stdin);
  int n,m; cin>>n>>m;
  
  for(int i=1 ; i<=m ; i++)
  {
    int a,b; cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a); 
    }

    

  // Starting the BFS
    
    BFS(1);





 
 // Finding the Shortest path from the start(which is set to 1) to the destination(which is set to 9)
    

    
if(parent[n]==0){
    cout<<"IMPOSSIBLE"<<endl;
}else{
    vector <int> track;
    int x = n;
    while(parent[x] != 0)
    {
        
        track.push_back(x);
        x = parent[x];
    } 
    track.push_back(1);


    reverse(track.begin(),track.end());
    
    

    cout<<dist[n]+1<<endl;
    for(auto i: track){
        cout<<i<<" ";
    }
    cout<<endl;
}


  return 0;
}





