#include <bits/stdc++.h>
using namespace std;
const int m = 1e9 +7;





int iterative_expo(int a, int b){
    int ans = 1;
    while(b>0){
        

        if(b&1){
            ans = (ans*1LL*a)%m;
            }


        a  = (a*1LL*a)%m;
        b >>= 1;
    }

    return ans;
}



int main(){

    freopen("input2.txt","r",stdin);
   
    int a,b;
    cin>>a>>b;

    
    int y = iterative_expo(a,b);


    
    cout<<y<<endl;
    



    return 0;
}