#include <bits/stdc++.h>
#define MAX INT_MAX
#define MIN INT_MIN
#define ll long long int
#define fr(i,s,e) for(ll i=(s);i<(e);i++)
#define  mod 1e9+7
using namespace std;
vector<ll>a[100005];
vector<bool>vis(100005, false);
vector<ll>dp(100005, 0);
void dfs(ll b)
{
	vis[b] = true;
	for (auto x : a[b])
	{
		if (!vis[x])
			dfs(x);
		dp[b] = max(dp[b], 1 + dp[x]);
	}
}
int main()
{
	ll n, m;
	cin >> n >> m;
	ll ans = 0;
	fr(i, 0, m)
	{
		ll x, y;
		cin >> x >> y;
		a[x].push_back(y);
	}
	fr(i, 1, n + 1)
	{
		if (!vis[i])
			dfs(i);
	}
	fr(i, 1, n + 1)
	ans = max(ans, dp[i]);
	cout << ans;
}