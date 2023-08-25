
// Unweigthed adjacency list declared of size N
// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 10e5;
ll memo[N];


ll frog(int n){


 if(n==1){
    return 1;
 }else if(n==2){
    return 2;
 }

    if(memo[n]!=0){
        return memo[n];
    }
    
    
    
    memo[n] =  frog(n-1) + frog(n-2);



    return memo[n];


}







int main(){

    int n;cin>>n;

    cout<<frog(n)<<endl;


  return 0;
}





