#include <bits/stdc++.h>
#define MAX INT_MAX
#define MIN INT_MIN
#define ll long long int
#define dd double
#define for(i,s,e) for(ll i=(s);i<(e);i++)
#define  mod 1e9+7
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	ll n;
	cin >> n;
	dd a[n];
	for (i, 0, n)
	{
		cin >> a[i];
	}
	vector<vector<dd>>dp(n, vector<dd>(n + 1, 0));
	dp[0][0] = 1 - a[0];
	dp[0][1] = a[0];
	for (i, 1, n)
		for (j, 0, n + 1)
		{
			dp[i][j] += dp[i - 1][j] * (1 - a[i]);
			if (j > 0)
				dp[i][j] += dp[i - 1][j - 1] * a[i];
		}
	dd ans = 0;
	for (i, n / 2 + 1, n + 1)
	{
		ans += dp[n - 1][i];
	}
	cout << setprecision(9);
	cout << fixed;
	cout << ans;
}