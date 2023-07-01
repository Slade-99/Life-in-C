

#include <bits/stdc++.h>
using namespace std;


int main(){
  //adjacency matrix for unweighted

  freopen("input.txt","r",stdin);
  
  
  int N,E;
  cin>>N>>E;
  
  int graph[N+1][N+1];
  

for(int i=0; i<=N ; i++){
 for(int j=0 ; j<=N ; j++){
   graph[i][j] =0;
 }
}




  for(int i=0; i<E; i++){
    int a,b;
    cin>>a>>b;
    graph[a][b] =1;
    graph[b][a] =1; 
  }





for(int i=1; i<=N ; i++){

 
 for(int j=1 ; j<=N ; j++){
   cout<<graph[i][j]<<" ";
 }

  cout<<endl;
}

















  return 0;
}




