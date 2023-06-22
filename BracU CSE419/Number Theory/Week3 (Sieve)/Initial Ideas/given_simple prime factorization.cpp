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

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //init_code();

	int n = 126; //let's find the prime factorization of 126
    vector<int> prime_factors;

    for(int i=2;i<n;i++)
    {
        while(n%i==0)
        {
            prime_factors.push_back(i);
            n /= i;
        }
    }
    if(n>1)
        prime_factors.push_back(n);

    cout << "Printing the prime factors: ";
    for(auto v:prime_factors)
    {
        cout << v << " ";
    }
    cout << endl;
 	return 0;
}