#include <bits/stdc++.h>
#define MAX INT_MAX
#define MIN INT_MIN
#define ll long long int
#define for(i,s,e) for(ll i=(s);i<(e);i++)
#define  mod 1e9+7
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n;
	cin >> n;
	ll a[n];
	for (i, 0, n)
		cin >> a[i];
	vector<vector<ll>>dp(n, vector<ll>(n, 100));
	for (i, 1, n)
		dp[i][i] = 0;
	for (h, 2, n)
		for (i, 1, n - h + 1 )
		{
			ll j = i + h - 1;
			for (k, i, j)
			{
				dp[i][j] = min(dp[i][k] + dp[k + 1][j] + (a[i - 1] * a[k] * a[j]), dp[i][j]);
			}

		}
	for (i, 1, n)
	{	for (j, 1, n)
		{
			cout << dp[i][j] << " ";

		}
		cout << endl;
	}

}