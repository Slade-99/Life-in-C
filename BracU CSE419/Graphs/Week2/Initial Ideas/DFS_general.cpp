
// Unweigthed adjacency list declared of size N
// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int t = 0;
vector <int>  graph[N];
vector <int> parent(N,0);
vector <string> colour(N,"white");
vector <int> start_time(N,0);
vector <int> end_time(N,0);
bool cyc = false;


void DFS(int u){


    t++;
    start_time[u] = t;
    colour[u] = "grey";



    cout<<u<<" ";
    

    // Part 1

    for(auto v:graph[u]){
        
        /*
        if(colour[v]=="black"){
            cyc = true;
        }
        */
        
        if(colour[v] == "white"){
            parent[v] = u;
          // Part 2
            DFS(v);

          // Part 3
        }
    
    }


    
    t++;
    end_time[u] = t;
    colour[u] = "black";
    // Insert into an array as each vertex is finished to compute Topsort for a DAG
    //Part 4


}







int main(){

// Taking Graph input
  freopen("input.txt","r",stdin);
  int a,b;
  
    

  while(cin>>a>>b)
  {
    graph[a].push_back(b);
    graph[b].push_back(a); 
    }


  DFS(1);
 
    cout<<endl;
    //cout<<"Number of nodes is "<< t/2 <<endl;
    
    /*
    if(cyc){
        cout<<"Cycle detected"<<endl;
    }
    */


  return 0;
}





