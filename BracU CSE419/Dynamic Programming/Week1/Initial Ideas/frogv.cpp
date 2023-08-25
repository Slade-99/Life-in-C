
// Unweigthed adjacency list declared of size N
// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 1e5;
int memo[N];
int store[N];

ll frog(int n){




    if(memo[n]!=0){
        
        return memo[n];
    }else if(n<1){
        
        return N;
    }
    
    
    int ans = N;
   
    for(auto i: store){
        
        if(i!=0){
            
            int x = frog(n-i);
            
            ans = min(ans,x) ;
            
        }else{
            break;
        }

        
    }
    ans =ans+1;
    memo[n] = ans;
    
    return memo[n];


}







int main(){
    freopen("input.txt","r",stdin);
    
    int t;cin>>t;
    int n;cin>>n;
    
    for(int i=0; i<n; i++){
        int x; cin>>x;
        memo[x] = 1;
        store[i] = x;
    }
    


    
    cout<<frog(t)<<endl;

   
    
  return 0;
}





