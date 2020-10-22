#include <bits/stdc++.h>
#define MAX INT_MAX
#define MIN INT_MIN
#define ll long long int
#define for(i,s,e) for(ll i=(s);i<(e);i++)
#define  mod 1000000007
using namespace std;

int main()
{
	ll n, w;
	cin >> n >> w;
	ll a[n + 1], b[n + 1];
	for (i, 1, n + 1)
	{
		cin >> a[i] >> b[i];
	}
	vector<vector<ll>>dp(n + 1, vector<ll>(w + 1, 0));
	for (i, 0, n + 1)
	{
		for (j, 0, w + 1)
		{
			if (i == 0 || j == 0)
				dp[i][j] = 0;
			else if (a[i] <= j)
				dp[i][j] = max(b[i] + dp[i - 1][j - a[i]], dp[i - 1][j]);
			else
				dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[n][w];
}