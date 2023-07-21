#include <bits/stdc++.h>
using namespace std;
const int m = 1e9 +7;


int recursive_expo(int a, int b){
    
    
    if(b==1){
        return a;
    }
    
    int x = recursive_expo(a, b/2);

    if(b&1){
        return  ((((x*1LL*x)%m)*1LL*a)%m);
    }else{
        return (x*1LL*x)%m;
    }
}






int main(){

    freopen("input2.txt","r",stdin);
   
    int a,b;
    cin>>a>>b;

    int x = recursive_expo(a,b);
   


    
   
    cout<<x<<endl;



    return 0;
}