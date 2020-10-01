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
  for(i,1,n+1)
  	cin>>a[i];
   int dp[n+1][k+1];

  for(i,1,n+1)
  	for(j,0,k+1)
  	{
  		if(j==0)
  			dp[i][j]=1;
  		else
  		{
  			int o=(i==1)?0:dp[i-1][j];
  			int y=(a[i]>j)?0:dp[i][j-a[i]];
  			dp[i][j]=(o+y)%mod;
  		}
  	}
  cout<<dp[n][k];
  
} 