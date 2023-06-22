/*
#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int T;
    cin >> T ;
    int i=1;
     while(T--){
        
        int N,K,P;

        cin >> N >> K >> P;

        if((K+P)<N){
            cout<< "Case " <<i<<": "<<K+P<<endl;
        }else if(((K+P)%N)==0){

            cout<< "Case " <<i<<": "<<N<<endl;
        }else{
            cout<< "Case " <<i<<": " <<(K+P)%N<<endl;
        }

        i++;
        
    }






    return 0;
}

*/