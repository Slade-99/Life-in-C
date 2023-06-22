

#include <bits/stdc++.h>
using namespace std;


int main(){
  //adjacency list for unweighted
  int N,E;
  cin>>N>>E;
  
  vector <int> graph[N+1];



  //Populating the vectors
  for(int i=0; i<=E; i++){
    int a,b;
    cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a); //If the graph is not undirected then comment out this line
  }



  // Printing the Graph

/*
for(int i=1; i<N ; i++){

 cout<<"Node "<<i<<":";
 for(auto j: graph[i]){
   cout<<j<<" ";
 }

  cout<<endl;
}
*/
















  return 0;
}






