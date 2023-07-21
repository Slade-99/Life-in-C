#include <bits/stdc++.h>
using namespace std;






int iterative_expo(int a, int b, int m){
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
    int m = 1e9 +7;
    int a,b,c;
    cin>>a>>b>>c;

    int z = iterative_expo(b,c,m-1);
    int y = iterative_expo(a,z,m);


    
    cout<<y<<endl;
    



    return 0;
}