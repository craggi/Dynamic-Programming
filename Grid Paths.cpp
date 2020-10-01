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
  char a[n][n];

  for(i,0,n)
  	for(j,0,n)
  	cin>>a[i][j];
 int dp[n][n]={0};
  for(i,0,n)
  	for(j,0,n)
  	{
  		if(i==0 && j==0)
  		{
  			if(a[i][j]=='.')
  				dp[0][0]=1;
  			else
  				dp[0][0]=0;
  		}
  		else if(a[i][j]=='.')
  		{
  		if(i-1>=0 && j-1>=0)
  		dp[i][j]=(dp[i][j-1]+dp[i-1][j])%mod;
  		else if(i-1<0)
  			dp[i][j]=(dp[i][j-1])%mod;
  		else
  			dp[i][j]=(dp[i-1][j])%mod;
  	}
  	else
  		dp[i][j]=0;
  	}

  cout<<dp[n-1][n-1];
} 