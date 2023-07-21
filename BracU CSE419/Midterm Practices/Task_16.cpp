#include <bits/stdc++.h>
using namespace std;
const int m = 1e6 +7;
vector<bool> primality(m,true);
vector<int> distinct_prime_factors[m];




int main(){

    //freopen("input2.txt","r",stdin);
   
    int a;
    cin>>a;


    for(int i=2; i<=m ; i++){

        if(primality[i]){
            for(int j=i+i ; j<=m ; j+=i){
                primality[j] = false;
                distinct_prime_factors[j].push_back(i);
            }
        }

    }
    



    for(auto i: distinct_prime_factors[a]){
        cout<<i<<endl;
    }

    



    return 0;
}