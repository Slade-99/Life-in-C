


#include<bits/stdc++.h>

using namespace std;

void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

int binExpRec(int a, int b, int m)
{
	if(b==0)
		return 1;

	int x = binExpRec(a,b/2,m);
	if(b&1) // if b is odd
		return ((x*1LL*x)%m * a)%m;
	else    // if b is even
		return (x*1LL*x)%m;
}

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
	int a,b;
	int m = 1e9+7;
	cin >> a >> b;
	cout << "Using Recursion: " << binExpRec(a,b,m) << endl;
	cout << "Using Iteration: " << binExpIter(a,b,m) << endl;
	return;
}


int main()
{
	init_code(); // comment out this line if you wish to enter inputs manually.
	int t;
	cin >> t;
	while(t--)
		solve();

	return 0;
}


