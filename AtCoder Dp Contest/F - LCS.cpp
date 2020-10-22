#include <bits/stdc++.h>
#define MAX INT_MAX
#define MIN INT_MIN
#define ll long long int
#define for(i,s,e) for(ll i=(s);i<(e);i++)
#define  mod 1e9+7
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	ll n, m;
	m = s1.length();
	n = s2.length();
	vector<vector<ll>>dp(m + 1, vector<ll>(n + 1));
	for (i, 0, m + 1)
	{
		for (j, 0, n + 1)
		{
			if (i == 0 || j == 0)
				dp[i][j] = 0;
			else if (s1[i - 1] == s2[j - 1])
				dp[i][j] = 1 + dp[i - 1][j - 1];
			else
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
		}
	}
	//cout << dp[m][n] << endl;
	string ans = "";
	ll i = m, j = n;
	while (i > 0 && j > 0)
	{
		if (s1[i - 1] == s2[j - 1])
		{	ans += s1[i - 1];
			i--;
			j--;
		}
		else if (dp[i - 1][j] <= dp[i][j - 1])
			j--;
		else
			i--;


	}
	reverse(ans.begin(), ans.end());
	cout << ans;

}