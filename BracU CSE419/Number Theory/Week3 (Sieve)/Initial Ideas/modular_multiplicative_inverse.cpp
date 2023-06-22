#include <bits/stdc++.h>
#define nl "\n"
#define ll long long int
using namespace std;


int main(){





    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    ll m = 10e9 +7;

    ll a = 82;
    ll b = 2;


    cout<<(a/b)%m<<endl;


    ll z = (pow(b,m-2))%m;

    ll x = (a%m)*((z));
    
    cout<<x%m;
    
    
    
    
    return 0;



}
