
// Unweigthed adjacency list declared of size N
// (Starting node is assumed ot be one and numbered sequentially)

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 10e5;
ll memo[N];


ll fibo(int n){


 if(n<=1){
    return n;
 }

    if(memo[n]!=0){
        return memo[n];
    }
    
    
    
    memo[n] =  fibo(n-1) + fibo(n-2);



    return memo[n];


}







int main(){

    int n;cin>>n;

    cout<<fibo(n)<<endl;


  return 0;
}





