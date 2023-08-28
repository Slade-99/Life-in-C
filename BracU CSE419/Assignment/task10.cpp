// Unweigthed adjacency list declared of size N
 
// (Starting node is assumed ot be one and numbered sequentially)
 
#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
vector<int> graph[N];
bool visited[N];
int color[N];
vector <int> parents[N];
 

 
void DFS(int u){

    visited[u] = true;
    
    // Part 1

    for(auto v:graph[u]){
        if(!visited[v]){

          for(auto i : parents[u]){
            parents[v].push_back(i);
          }
          parents[v].push_back(u);
          // Part 2
            DFS(v);

          // Part 3
        }
    
    }

    //Part 4

}



 
 
 
int main() {
 
  // Taking Graph input
  //freopen("input10.txt", "r", stdin);
  
  int n,Q;cin>>n>>Q;
  
 
  for (int i = 1; i <=n; i++) {
    int c;cin>>c;
 
    color[i] = c;
  }
 
 
 
 for(int i=1; i<n; i++){
    int a,b;cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a);
 }
 
 
DFS(1);

 
  
  while(Q--){
    int start;cin>>start;
    
    color[start] = color[start]^1;
    for(auto i : parents[start]){
      color[i] = color[i]^1;
    }

  }
    int result = 0;
 
    for(int i=1; i<=n; i++){
        if(color[i]){
            result++;
        }
    }

  cout<<result<<endl;
  

  return 0;
}
