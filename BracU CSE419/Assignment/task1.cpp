// Counting Rooms

//URL of the problem // https://cses.fi/problemset/task/1192



#include <bits/stdc++.h>
using namespace std;
const int N= 1e6+10;
vector <int>  graph[N];
vector <int> visited(N,0);




void DFS(int u){

    visited[u] = 2;

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







int main(){

// Taking Graph input
  //freopen("input1.txt","r",stdin);
  int a,b; cin>>a>>b;

  vector<int> storage((a*b + 1),0);


  //storing the input
  for(int i=1;i<=(a*b);i++){

    char x; cin>>x;
    if(x=='.'){
        storage[i] = 1;

    }
  }


    
    
    
    //Preparing the graph
    for(int i=1;i<=(a*b);i++){
        if(storage[i]==1){
            
            
            
            visited[i] = 1;
            
            if((storage[i+1])==1  && ((i%b)!=0)){
                graph[i].push_back(i+1);

            }

            
            if((storage[i-1])==1   && (((i-1)%b)!=0)  && (i!=1)   ){
                graph[i].push_back(i-1);
            }


            if((storage[abs(i-b)])==1    && (i>b)    ){
                graph[i].push_back(abs(i-b));
            }


            if((storage[abs(i+b)])==1     &&  (i<=(b*(a-1)))){
                graph[i].push_back(abs(i+b));   
            }
        
        }
    }




// Using DFS to find number of connected components
int components = 0;

for(int i=1; i<=(a*b);i++){
    
    if(visited[i]==1){
        
        
        DFS(i);
        components++;
    }
}

cout<<components<<endl;
  return 0;
}






