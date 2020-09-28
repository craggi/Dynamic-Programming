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
  ll n,k;
  cin>>n>>k;
  ll a[n];
  for(i,0,n)
  	cin>>a[i];
  vector<ll>dp(k+1,0);
  dp[0]=1;
  for(i,1,k+1)
  	for(j,0,n)
  	{
  		if(i-a[j]>=0)
  		{
  			dp[i]=(dp[i]+dp[i-a[j]])%mod;
  			
  		}
  	}
  cout<<dp[k];
  
} 