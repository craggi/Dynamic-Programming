#include <bits/stdc++.h>
#define MAX INT_MAX
#define MIN INT_MIN
#define ll long long int
#define for(i,s,e) for(ll i=(s);i<(e);i++)
#define  mod 1000000007
using namespace std;

int main()
{
	ll n, k;
	cin >> n >> k;
	ll a[n + 1];
	for (i, 1, n + 1)
		cin >> a[i];
	ll dp[k + 1] = {0};
	for (i, 1, k + 1)
	{
		for (j, 1, n + 1)
		{
			if (i >= a[j] && dp[i - a[j]] == 0)
			{
				dp[i] = 1;
				break;
			}

		}
	}
	cout << (dp[k] == 1 ? "First" : "Second");
}