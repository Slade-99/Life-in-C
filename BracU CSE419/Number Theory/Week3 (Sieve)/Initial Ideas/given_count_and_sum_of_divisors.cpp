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
vector<int> div_count(N,0);
vector<int> div_sum(N,0);
vector<int> divisors[N];

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //init_code();

    for(int i=1;i<N;i++)
    {
        for(int j=i; j<N;j+=i)
        {
            div_count[j]++;
            div_sum[j] += i;
            divisors[j].push_back(i);
        }
    }

    //let's print the primality of the numbers 1-20
    for(int i=1;i<=20;i++)
    {
        cout << i << " count: " << div_count[i];
        cout << " sum: " << div_sum[i] << " and the divisors are: ";
        for(auto v:divisors[i])
            cout << v << " ";
        cout << endl;
    }
    
 	return 0;
}