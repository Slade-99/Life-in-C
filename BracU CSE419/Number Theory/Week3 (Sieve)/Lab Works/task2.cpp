
/*
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll my_pow(ll a , ll b , ll m){

    ll answer = 1;

  if(b==0){
    return 1;
  }else if(b%2==0){
    answer = my_pow(a,b/2,m);
    return ((answer%m)*(answer%m))%m;
  }else{
    answer = my_pow(a,(b-1)/2,m);
    return  (((((answer%m)*(answer%m))%m)*a)%m);
  }
  
}



int main() {

  ll a,b,c,m;
  int Q;
  
  m = 10e9 + 7;
  
  
  cin>>Q;
  
  
  
  while(Q--){
  cin>>a>>b>>c;
  ll power_result = my_pow(b,c,m-1);
  
  ll result = my_pow(a,power_result,m);
  


  cout<<result<<endl;


  }

  

  



  return 0;
}

*/