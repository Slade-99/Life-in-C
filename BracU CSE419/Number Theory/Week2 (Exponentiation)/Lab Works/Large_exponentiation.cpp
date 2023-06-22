#include<bits/stdc++.h>

using namespace std;

void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

// I prefer to use the Iterative Implementation.
// You can solve the problem using the Recursive Implementation too.
int binExpIter(int a, int b, int m)
{
	int ans = 1;
	while(b>0)
	{
		if(b&1)
			ans = (ans*1LL*a)%m; // multiplying with current power of a if b has a bit 1 at this position
		a = (a*1LL*a)%m;  // increasing power of a for every bit
		b >>= 1; // dropping the last bit
	}
	return ans;
}

void solve()
{
	int a,b,c;
	int m = 1e9+7;
	cin >> a >> b >> c;
	int new_power = binExpIter(b,c,m-1); //Since m is a prime, so ETF(n) is n-1
	cout << binExpIter(a,new_power,m) << endl;
	return;
}

// Calculate a^(b^c) modulo m
// We will use Euler's Theorem to find the solution.
int main()
{
	init_code(); // comment out this line if you wish to enter inputs manually.
	int t;
	cin >> t;
	while(t--)
		solve();

	return 0;
}