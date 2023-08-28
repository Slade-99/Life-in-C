// Round Trip

//URL of the problem // https://cses.fi/problemset/task/1669





#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
vector<int> graph[N];
vector<bool> visited(N, false);
int parent[N];
int end_x = 0;
int end_y = 0;
bool flag = false;

bool DFS(int u,int p) {

  // cout<<u<<"Node: "<<depth[u]<<endl;
  visited[u] = true;
    
 bool cycle = false;
  // Part 1

  for (auto v : graph[u]) {
    
    
   
    
    if (v != p) {

      if(visited[v]){
        end_x = u;
        end_y = v;
        return true;
      }
        
        
        else{
      // Part 2
      parent[v] = u;
      
      cycle |= DFS(v,u);
       
      
        }
    
      // Part 3

     }
    
    
    }
  
  
  
  

  return cycle;

  // Part 4


}



int main() {

  // Taking Graph input
  //freopen("input5.txt", "r", stdin);
  int n,e;
  cin >> n>>e;
  for (int i = 1; i <=e; i++) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  
    for(int i=1;i<=n;i++){
    if(!visited[i]){
    bool x = DFS(i,-1);
    
    if(x){
        flag = true;
        break;
    }

    }


    }

    if(flag){

        int k=0;
        vector <int> answer;
        answer.push_back(end_x);
        while(end_x != end_y){
            answer.push_back(end_y);
            end_y = parent[end_y];
            k++;
        }

        
        answer.push_back(end_y);

        cout<<k+2<<endl;
        for(auto i:answer){
            cout<<i<<" ";
        }
        

    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }

  return 0;
}



