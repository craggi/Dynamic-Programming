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
  vector<ll>dp(n+1);
  dp[0]=0;
  for(i,1,n+1)
  {
  	ll t=i;
  	ll a=MAX;
  	while(t !=0)
  	{
  		ll d=t%10;
  		t/=10;
  		if(d==0)
  			continue;
  		else
  			a=min(a,1+dp[i-d]);

  	}
  	dp[i]=a;
  }
  cout<<dp[n];
  
} 