//Labyrinth

//URL of the problem // https://cses.fi/problemset/task/1193



#include <bits/stdc++.h>
using namespace std;
const int N= 1e6+10;
vector <int>  graph[N];
vector <int> visited(N,0);
vector <int> dist(N,0);
int parent[N];
vector <int> Q;


void BFS(int s){

  Q.push_back(s);
  visited[s] = 2;
  

while((Q.size())>0)
{
  
  
  int u = Q[0];
  Q.erase(Q.begin());

    for(auto v: graph[u]){
        if(visited[v]==1){
        dist[v] = dist[u] + 1;
        parent[v] = u;
        Q.push_back(v);
        visited[v] = 2;
        
        }
    }




}

}







int main(){

// Taking Graph input
  //freopen("input2.txt","r",stdin);
  int a,b; cin>>a>>b;
    int start,end;
  vector<int> storage((a*b + 1),0);


  //storing the input
  for(int i=1;i<=(a*b);i++){

    char x; cin>>x;
    if(x=='.'){
        storage[i] = 1;

    }else if(x=='A'){
        storage[i] = 1;
        start = i;
    }else if(x=='B'){
        storage[i] = 1;
        end = i;
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





BFS(start);


if(visited[end]==1){
    cout<<"NO"<<endl;
}else{
    cout<<"YES"<<endl;
    
    vector<char> result;
    cout<<dist[end]<<endl;
    
    
    
    
    

    int i = end;
    
    
    while(i!=start){

        
        
        if(parent[i]==i-1){
            result.push_back('R');
        }else if( parent[i]==i+1){
            result.push_back('L');
        }else if( parent[i]==i-b){
            result.push_back('D');
        }else{
            result.push_back('U');
        }

        i = parent[i];
    }

    reverse(result.begin(),result.end());
    for(auto i: result){
        cout<<i;
    }

    
}
  return 0;
}






