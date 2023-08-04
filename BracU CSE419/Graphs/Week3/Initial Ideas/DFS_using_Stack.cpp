
// Unweigthed adjacency list declared of size N
// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
const int N= 1e6+10;
vector <int>  graph[N];
bool visited[N];
vector <int> S;


void DFS(int s){

  S.push_back(s);
  visited[s] = true;
  

while((S.size())>0)
{
  
  
  int u = S[S.size()-1];
  S.erase(S.end()-1);
    cout<<" "<<u;
    for(auto v: graph[u]){
        if(!visited[v]){
        S.push_back(v);
        visited[v] = true;
        
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
    DFS(1);


 


  return 0;
}





