#include <bits/stdc++.h>
#define nl "\n"
#define ll long long int
using namespace std;
// code for computing GCD
int gcd(int a , int b){
    for(int i = a; i>=1; i--){  //a is less than b. So we start looking for the common divisor from a.
        if(a%i==0 && b%i==0){
            return i;
        }
    }
    return 1;
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int a,b,ans; // we need to compute the GCD of a and b, where a<b;
    cin >> a >> b;
    ans=gcd(a,b);
    cout << "The GCD of "<<a<<" and "<< b<< " is "<< ans << nl;
    

    return 0;
}

