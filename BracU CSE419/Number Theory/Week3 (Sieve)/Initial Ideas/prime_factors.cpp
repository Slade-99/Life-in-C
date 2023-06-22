#include <bits/stdc++.h>
#define nl "\n"
#define ll long long int
using namespace std;


int main(){





    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);



    ll x = 20;




    for(int i=2; i*i<=x ; i++){

        while(x%i==0){
            cout<<i;
            x = x/i;
        }





    }

    if(x>1){
        cout<<x;
    }
    
    
    
    
    
    
    return 0;



}
