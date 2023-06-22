/*

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ll a,b,ans,m;
  ans = 1;
  m = 10e9 + 7;
  cin>>a;
  
  cin>>b;
  
  while(b!=0){
    if(b&1){
      ans = (ans*a)%m;
    }

    a = (a*a)%m;
    b >>=1;
    
  }


  cout<<ans<<endl;
  

  

  



  return 0;
}

*/