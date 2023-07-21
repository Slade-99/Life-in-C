#include <bits/stdc++.h>
using namespace std;
const int m = 1e6 +7;
vector<bool> primality(m,true);





int main(){

    //freopen("input2.txt","r",stdin);
   
    int a;
    cin>>a;


    for(int i=2; i<=m ; i++){

        if(primality[i]){
            for(int j=i+i ; j<=m ; j+=i){
                primality[j] = false;
            }
        }

    }
    



    cout<<primality[a]<<endl;

    



    return 0;
}