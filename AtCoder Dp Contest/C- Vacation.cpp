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
	vector<vector<ll>>a(n + 1, vector<ll>(3));
	for (i, 1, n + 1)
		for (j, 0, 3)
			cin >> a[i][j];
	for (i, 2, n + 1)
		for (j, 0, 3)
		{

			if (j == 0)
				a[i][j] = max(a[i - 1][j + 1] + a[i][j], a[i - 1][j + 2] + a[i][j]);
			if (j == 1)
				a[i][j] = max(a[i - 1][j + 1] + a[i][j], a[i - 1][j - 1] + a[i][j]);
			if (j == 2)
				a[i][j] = max(a[i - 1][j - 1] + a[i][j], a[i - 1][j - 2] + a[i][j]);
		}

	ll ans = max(a[n][0], a[n][1]);
	cout << max(ans, a[n][2]);
}