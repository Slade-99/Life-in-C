#include <bits/stdc++.h>
using namespace std;
const int m = 1e6 +7;
vector<bool> primality(m,true);
vector<int> highest_prime(m,1);




int main(){

    //freopen("input2.txt","r",stdin);
   
    int a;
    cin>>a;


    for(int i=2; i<=m ; i++){

        if(primality[i]){
            highest_prime[i] = i;
            for(int j=i+i ; j<=m ; j+=i){
                
                primality[j] = false;
                
                    highest_prime[j] = i;
                
            }
        }

    }
    



    while(a!=1){
        cout<<highest_prime[a]<<" ";
        a = a/highest_prime[a];
    }

    



    return 0;
}