#include <bits/stdc++.h>
using namespace std;
const int m = 1e6 +7;
vector<int> divisor_sum(m,0);





int main(){

    freopen("input2.txt","r",stdin);
   



        for(int i=1; i<=m ; i++){

            divisor_sum[i] += i;
            
            for(int j=i+i ; j<=m ; j+=i){
                divisor_sum[j] +=i;
            }
        

    }
    


    int t;
    cin>>t;
    while(t--){
    int a;
    cin>>a;
    cout<<divisor_sum[a]<<endl;
    }
    



    return 0;
}