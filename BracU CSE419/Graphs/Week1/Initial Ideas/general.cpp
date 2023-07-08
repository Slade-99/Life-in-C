
// Unweigthed adjacency list declared of size N
// (Starting node is assumed ot be zero and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
vector <int>  graph[N];




int main(){
  
  
  freopen("input.txt","r",stdin);
  
  
  
  



  int a,b;
  int highest = 0;
  while(cin>>a>>b)
  {
    highest = max(max(highest,a),b);
    graph[a].push_back(b);
    graph[b].push_back(a); 
    
  
  }



 

/*
// for printing

for(int i=0 ; i<=highest ; i++){

 cout<<"Node "<<i<<":";
 for(auto j: graph[i]){
   cout<<j<<" ";
 }

  cout<<endl;
}

*/














  return 0;
}





