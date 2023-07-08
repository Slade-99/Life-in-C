
// Unweigthed adjacency list declared of size N
// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
const int N= 1e6+10;
vector <int>  graph[N];
vector <bool> visited(N,false);




void DFS(int u){



    cout<<u<<" ";
    visited[u] = true;

    // Part 1

    for(auto v:graph[u]){
        if(!visited[v]){

          // Part 2
            DFS(v);

          // Part 3
        }
    
    }


    //Part 4


}







int main(){

// Taking Graph input
  freopen("input.txt","r",stdin);
  int n;
  cin>>n;
  for(int i=1 ; i<n ; i++)
  {
    int a,b;
    cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a); 
    }


  DFS(1);
 


  return 0;
}





