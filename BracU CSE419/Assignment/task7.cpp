// The Lakes

// URL of the Problem  https://codeforces.com/problemset/problem/1829/E


#include <bits/stdc++.h>
using namespace std;
const int N= 1e6+10;
vector <int>  graph[N];
vector <int> visited(N,0);
vector <int> depth(N,0);
int total_depth = 0;


void DFS(int u){

    visited[u] = 2;
    total_depth += depth[u];
    // Part 1

    for(auto v:graph[u]){
        if(visited[v]==1){

          // Part 2
            DFS(v);

          // Part 3
        }
    
    }

    //Part 4

}

void reset_graph(int x){
    for(int i=0;i<=x;i++){
        graph[i].clear();
        visited[i] = 0;
        depth[i] = 0;
    }
}





int main(){

// Taking Graph input
 //freopen("input7.txt","r",stdin);
  
  
  int t;cin>>t;
  
  while(t--){
  int a,b; cin>>a>>b;

  vector<int> storage((a*b + 1),0);


  //storing the input
  for(int i=1;i<=(a*b);i++){

    int x; cin>>x;
    if(x!=0){
        storage[i] = 1;
        depth[i] = x;
    }
  }


    
    
    
    //Preparing the graph
    for(int i=1;i<=(a*b);i++){
        if(storage[i]==1){
            
            
            
            visited[i] = 1;
            
            if(  ((i%b)!=0)){
                
                if((storage[i+1])==1 ){
                graph[i].push_back(i+1);}

            }

            
            if(  ((i-1)%b)!=0  ){
                
                
                
                
            if((i!=1)){
                
                if((storage[i-1])==1){
                
                graph[i].push_back(i-1);}}
            
            
            
            }


            
            
            if((i>b)){
            
                if((storage[abs(i-b)])==1  ){
                graph[i].push_back(abs(i-b));}
            
            }


            
            
            if( i<=(b*(a-1))){
                
                
                
                if((storage[abs(i+b)])==1){
                graph[i].push_back(abs(i+b));}   
            
            
            
            }
        
        }
    }




// Using DFS to find number of connected components
int max_depth = 0;

for(int i=1; i<=(a*b);i++){
    
    if(visited[i]==1){
        
        
        DFS(i);
        max_depth = max(max_depth,total_depth);
        total_depth = 0;
    }
}

int x = a*b;
reset_graph(x);
cout<<max_depth<<endl;


  }
  return 0;
}