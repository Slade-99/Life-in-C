
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
  int a,b;
  while(cin>>a>>b)
  {
   
    graph[a].push_back(b);
    graph[b].push_back(a); 
    }


    int num_components = 0;


  for(int i=1; i<=n;i++){
    if(!visited[i]){
        DFS(i);
        cout<<endl;
        num_components ++;
    }
  }

    
    cout<<"There are " << num_components << " in the given graph";



  return 0;
}





