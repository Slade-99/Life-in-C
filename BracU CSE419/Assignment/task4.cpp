// Building Teams

//URL of the problem // https://cses.fi/problemset/task/1668




#include <bits/stdc++.h>
using namespace std;
const int N= 1e6+10;
vector <int>  graph[N];
vector <int> Q;
bool visited[N];
int parent[N];
int team[N];
bool flag = false;

void BFS(int s){

  Q.push_back(s);
  visited[s] = true;
  

while((Q.size())>0)
{
  
  
  int u = Q[0];
  Q.erase(Q.begin());

    
    int new_team = 0;
    if(team[u]==1){
         new_team = 2;
    }else if(team[u]==2){
         new_team = 1;
    }
    
    
    for(auto v: graph[u]){
        if(team[u]==team[v]){
            flag = true;
        }
        
        if(!visited[v]){
        Q.push_back(v);
        visited[v] = true;
        team[v] = new_team;
        parent[v] = u;
        }
    }




}




    
}








int main(){

// Taking Graph input
  //freopen("input4.txt","r",stdin);
  int n,m; cin>>n>>m;
  
  for(int i=1 ; i<=m ; i++)
  {
    int a,b; cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a); 
    }

    

  // Starting the BFS
    
    for(int i=1; i<=n;i++){
        if(!visited[i]){
            team[i]=1;
            BFS(i);
        }
    }
    
    
    


   if(flag){
    cout<<"IMPOSSIBLE"<<endl;
   }else{
    
    

    for(int i=1;i<=n;i++){
        cout<<team[i]<<" ";
    }



   }


  return 0;
}





