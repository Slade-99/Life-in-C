#include <bits/stdc++.h>
#define nl "\n"
#define ll long long int
using namespace std;


int main(){





    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);



    ll x = 1000;



    int seive[x] ;

    for(int i=0;i<x;i++)
    {
        seive[i] = 1;
    }
    
    
    
    
    for(int i =2; (i*i)<x ; i++){

        
            
            for(int j = i ; j<x ; j += i){

                if(i>seive[j]){
                  seive[j]=i;
                }

            }
        

    }




    
    cout<<seive[10]<<endl;
    
    
    
    
    
    
    return 0;



}
