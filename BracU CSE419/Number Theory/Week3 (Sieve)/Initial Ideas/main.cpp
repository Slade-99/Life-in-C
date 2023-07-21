#include<bits/stdc++.h>
using namespace std;
const int n = 1e7 +9;

vector <bool> isprime(n,true);
vector <int> sum(n,1);
int main() {
  



  

  for(int i=2; i<n; i++){

    
      
      for( int j = i; j<n ; j+=i){
        
        sum[j] += i;
      }
    
  }

  
  
  
  
  
  cout<<sum[8]<<endl;
  
  
  
  
  
  return 0;




}