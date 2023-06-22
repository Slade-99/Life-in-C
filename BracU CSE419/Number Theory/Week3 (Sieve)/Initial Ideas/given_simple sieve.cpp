#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+10;

void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

// creating a list of boolean variables where each
// index will indicate the primality of that number
// Initializing all the numbers as primes initially
vector<bool> isPrime(N,true);

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //init_code();

	isPrime[1] = false;
    for(int i=2;i<N;i++)
    {
        if(isPrime[i] == true) //if the current i is prime then cancel out all the multiples of i
        {
            for(int j=i+i; j<N;j+=i)
                isPrime[j] = false;
        }
    }

    //let's print the primality of the numbers 1-20
    for(int i=1;i<=20;i++)
    {
        cout << i << " " << isPrime[i] << endl;
    }
    
 	return 0;
}