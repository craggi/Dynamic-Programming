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
  vector<ll>dp(n+1,MAX);
  //cout<<dp[2]<<endl;
  dp[0]=0;
  dp[1]=abs(a[0]-a[1]);
  for(i,2,n)
      for(j,1,k+1)
      {
        if(i-j>=0)
        {
      ll op1=abs(a[i]-a[i-j]);
      dp[i]=min(dp[i],op1+dp[i-j]);
      //cout<<i<<" "<<dp[i]<<endl;
    }
    }
    cout<<dp[n-1];
} 