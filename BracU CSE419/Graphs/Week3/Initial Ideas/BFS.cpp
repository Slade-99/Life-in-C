
// Unweigthed adjacency list declared of size N
// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
const int N= 1e6+10;
vector <int>  graph[N];
bool visited[N];
vector <int> Q;


void BFS(int s){

  Q.push_back(s);
  visited[s] = true;
  cout<<" "<<s;

while((Q.size())>0)
{
  
  
  int u = Q[0];
  Q.erase(Q.begin());

    for(auto v: graph[u]){
        if(!visited[v]){
        Q.push_back(v);
        visited[v] = true;
        cout<<" "<<v;
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
    BFS(1);


 


  return 0;
}





