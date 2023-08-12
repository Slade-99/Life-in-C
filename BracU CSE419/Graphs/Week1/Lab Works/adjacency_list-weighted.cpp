

#include <bits/stdc++.h>
using namespace std;


int main(){
  //adjacency list for unweighted
  
  freopen("input.txt","r",stdin);
  
  int N,E;
  cin>>N>>E;
  
  vector < pair<int,int>> graph[N+1];



  
  for(int i=0; i<E; i++){
    int a,b,c;
    cin>>a>>b>>c;
    graph[a].push_back(make_pair(b,c));
    graph[b].push_back(make_pair(a,c)); 
  }



 


for(int i=1; i<=N ; i++){

 cout<<"Node "<<i<<":";
 for(auto j: graph[i]){
   cout<<j.first<<","<<j.second<<" ";
 }

  cout<<endl;
}

















  return 0;
}





