
// Unweigthed adjacency list declared of size N
// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 1e5;









int main(){
    freopen("input.txt","r",stdin);
    
    int t;cin>>t;
    int n;cin>>n;
    vector<int> store(t+1,N);
    vector<int> coins;
    
    while(n--){
        int x;cin>>x;
        store[x] = 1;
        coins.push_back(x);
    }
    
    
    
    
    
    

    

    for(int i=1;i<=(t+1);i++){


        for(auto j: coins){
            
            if((i+j)<=t+1){
            store[i+j] = min(store[i+j],store[i] +1); 
            }
        
        }

    }
    
    
    cout<<store[t]<<endl;
   
    
  return 0;
}





