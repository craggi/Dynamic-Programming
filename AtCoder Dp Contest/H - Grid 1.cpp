#include <bits/stdc++.h>
#define MAX INT_MAX
#define MIN INT_MIN
#define ll long long int
#define for(i,s,e) for(ll i=(s);i<(e);i++)
#define  mod 1000000007
using namespace std;

int main()
{
	ll m, n;
	cin >> m >> n;
	char a[m][n];
	for (i, 0, m)
		for (j, 0, n)
			cin >> a[i][j];
	vector<vector<ll>>dp(m, vector<ll>(n, 0));
	dp[0][0] = 1;
	for (i, 1, n)
	{
		if (a[0][i] == '.')
			dp[0][i] = dp[0][i - 1];
	}
	for (i, 1, m)
	{
		if (a[i][0] == '.')
			dp[i][0] = dp[i - 1][0];
	}
	for (i, 1, m)
		for (j, 1, n)
		{
			if (a[i][j] == '.')
				dp[i][j] = (dp[i - 1][j] % mod + dp[i][j - 1] % mod) % mod;
		}
	cout << dp[m - 1][n - 1];
}