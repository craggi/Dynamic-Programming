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
  ll a[n];
  for(i,0,n)
    cin>>a[i];
  ll dp[n+1]={0};
  dp[1]=abs(a[0]-a[1]);
  for(i,2,n)
    {
      ll op1=abs(a[i]-a[i-2]);
      ll op2=abs(a[i]-a[i-1]);
      dp[i]=min(op1+dp[i-2],op2+dp[i-1]);
    }
 cout<<dp[n-1];
} 