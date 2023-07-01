

#include <bits/stdc++.h>
using namespace std;


int main(){
  
  
  freopen("input.txt","r",stdin);
  
  int N,E;
  cin>>N>>E;
  
  vector <int> graph[N+1];



  
  for(int i=0; i<E; i++){
    int a,b;
    cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a); 
  }



 


for(int i=1; i<=N ; i++){

 cout<<"Node "<<i<<":";
 for(auto j: graph[i]){
   cout<<j<<" ";
 }

  cout<<endl;
}

















  return 0;
}





