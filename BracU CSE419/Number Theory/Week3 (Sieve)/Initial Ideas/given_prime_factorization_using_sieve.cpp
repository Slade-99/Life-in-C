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
vector<int> hp(N);
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //init_code();

	isPrime[1] = false;
    hp[1] = 1;
    for(int i=2;i<N;i++)
    {
        if(isPrime[i] == true) //if the current i is prime then cancel out all the multiples of i
        {
            hp[i] = i;
            for(int j=i+i; j<N;j+=i)
            {
                isPrime[j] = false;
                hp[j] = i;
            }
        }
    }
    int n = 126;
    vector<int> prime_factors;
    // let's find the prime factorization of 126
    while(n>1)
    {
        prime_factors.push_back(hp[n]);
        n /= hp[n];
    }
    // since the primes are added in descending order
    // the following line will reverse the whole vector
    // not needed though    
    reverse(prime_factors.begin(), prime_factors.end());

    cout << "Printing the prime factors: ";
    for(auto v:prime_factors)
    {
        cout << v << " ";
    }
    cout << endl;

 	return 0;
}