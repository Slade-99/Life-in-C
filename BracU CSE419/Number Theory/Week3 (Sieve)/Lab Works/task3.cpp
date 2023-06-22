
/*
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

    int seive[hi] ;

    for(int i=0;i<=hi;i++)
    {
        seive[i] = 1;
    }
    
    
    
    
    for(int i =2; (i*i)<hi ; i++){

        
            
            for(int j = i ; j<hi ; j += i){

                if(i>seive[j]){
                  seive[j] = i;
                }

            }
        

    }
  






  

  return 0;
}
*/