#include <bits/stdc++.h>
#define nl "\n"
#define ll long long int
using namespace std;


int main(){





    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);



    ll x = 1000;



    bool seive[x] ;

    for(int i=0;i<x;i++)
    {
        seive[i] = true;
    }
    
    
    seive[1] = false;
    
    for(int i =2; (i*i)<x ; i++){

        if(seive[i]){
            
            for(int j = i+i ; j<x ; j += i){

                seive[j] = false;

            }
        }

    }




    
    cout<<seive[10]<<endl;
    
    
    
    
    
    
    return 0;



}
