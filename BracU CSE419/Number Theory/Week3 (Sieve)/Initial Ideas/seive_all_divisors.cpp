#include <bits/stdc++.h>
#define nl "\n"
#define ll long long int
using namespace std;


int main(){





    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);



    ll x = 1000;



    vector <int> seive[x] ;


    
    
    
    
    for(int i =1; (i*i)<x ; i++){

        
            
            for(int j = i ; j<x ; j += i){

                seive[j].push_back(i);

            }
        

    }



    for(auto i : seive[10]){
        cout<<i<<endl;
    }
    
    
    
    
    
    
    
    
    return 0;



}
