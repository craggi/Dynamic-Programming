#include <bits/stdc++.h>
#define MAX INT_MAX
#define MIN INT_MIN
#define ll long long int
#define for(i,s,e) for(ll i=(s);i<(e);i++)
#define  mod 1000000007
using namespace std;

int main()
{
	ll n;
	cin >> n;
	ll a[n];
	for (i, 0, n)
	{
		cin >> a[i];
	}
	vector<vector<ll>>dp(n, vector<ll>(n, 0));
	ll sum = 0;
	for (i, 0, n)
	{
		sum += a[i];
		ll l = 0;
		for (j, i, n)
		{
			ll x = (l + 2 <= j) ? dp[l + 2][j] : 0;
			ll y = (l + 1 <= j - 1) ? dp[l + 1][j - 1] : 0;
			ll z = (l <= j - 2) ? dp[l][j - 2] : 0;
			dp[l][j] = max(a[l] + min(x, y), a[j] + min(y, z));
			l++;
		}
	}
	ll ans = dp[0][n - 1];
	//cout << ans;
	cout << ans - (sum - ans);
}