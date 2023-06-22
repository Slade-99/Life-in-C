

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  int n,hi;
  hi =0;
  cin>>n;
  int given[n];
  for(int i =0; i<n;i++){
    cin>>given[i];
    if(given[i]>hi){
      hi = given[i];
    }
  }
 
  int seive[hi];

  int count[hi];

    for(int i=0 ; i<=hi;i++){
      seive[i] = 0;
    }
for(int i=0 ; i<=hi;i++){
      count[i] = 0;
    }
  for(auto i: given){
    count[i]+=1;
  }

  for(int i =1; i<=hi ; i++){
     
    for(int j =i;j<=hi;j+=i){
       if(count[j]>0){

         seive[i] += 1;
         
       }
     }
     }  
  


  
  for(int i = hi-1;i>0;i--){
  if(seive[i]>1){
    cout<<i<<endl;
    break;
  }
  
}





  return 0;
}
