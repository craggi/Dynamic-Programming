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
  int a[n+1],b[n+1];
  for(i,1,n+1)
  	cin>>a[i];
  for(i,1,n+1)
  	cin>>b[i];
  int dp[n+1][k+1];
  for(i,0,n+1)
  {
  	for(j,0,k+1)
  	{
  		if(j==0 ||i==0)
  			dp[i][j]=0;
  		else
  		{
  			int o=(i==1)?0:(dp[i-1][j]);
  			int t=(j<a[i])?0:(b[i]+dp[i-1][j-a[i]]);
  			dp[i][j]=max(o,t);
  		}

  	}
  }
  cout<<dp[n][k]<<endl;

 
} 