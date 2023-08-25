
// Unweigthed adjacency list declared of size N
// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
const int N= 1e6+10;
vector <int>  graph[N];
bool visited[N];
long long int path[N];
vector <int> Q;


void BFS(int s){

  Q.push_back(s);
  visited[s] = true;
  

while((Q.size())>0)
{
  
  
  int u = Q[0];
  Q.erase(Q.begin());

    for(auto v: graph[u]){
        path[v] += path[u];
        
        if(!visited[v]){
        Q.push_back(v);
        visited[v] = true;
        
        }
    }




}




    
}








int main(){

// Taking Graph input
  //freopen("input.txt","r",stdin);
  int n; cin>>n;
  

  for(int i=1 ; i<=n ; i++)
  {
    
    
    graph[i].push_back(i+1);
    graph[i].push_back(i+2);
    
    }

    path[1] = 1;
    path[2] = 1;
  // Starting the BFS
    BFS(1);

    
    cout<<path[n]<<endl;


  return 0;
}





