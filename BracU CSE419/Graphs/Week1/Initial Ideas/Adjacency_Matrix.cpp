

#include <bits/stdc++.h>
using namespace std;


int main(){
  //adjacency matrix for unweighted
  int N,E;
  cin>>N>>E;
  
  int graph[N+1][N+1];
  
// Setting all the values of 2D array to zero
for(int i=0; i<=N ; i++){
 for(int j=0 ; j<=N ; j++){
   graph[i][j] =0;
 }
}



// Populating the 2D array
  for(int i=0; i<E; i++){
    int a,b;
    cin>>a>>b;
    graph[a][b] =1;
    graph[b][a] =1; //If the graph is not undirected then comment out this line
  }



//Printing the Graph
/*
for(int i=1; i<=N ; i++){

 cout<<"Node "<<i<<":";
 for(int j=1 ; j<=N ; j++){
   cout<<graph[i][j]<<" ";
 }

  cout<<endl;
}
*/
















  return 0;
}





