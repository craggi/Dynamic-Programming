#include <bits/stdc++.h> 
#define MAX INT_MAX
#define MIN INT_MIN 
#define ll long long int
#define for(i,s,e) for(ll i=(s);i<(e);i++)
#define  mod 1000000007
using namespace std; 

int main() 
{ 
 std::ios::sync_with_stdio(false);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  vector<ll>dp(n+1,0);
  dp[0]=1;
  for(i,1,n+1)
  {
  	for(j,1,7)
  	{
  		if(j>i)
  			break;
  		dp[i]=(dp[i]+dp[i-j])%mod;
  	}
  }
  cout<<dp[n];
} 