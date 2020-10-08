#include<iostream>
#define ll long long int
using namespace std;
int main()
{
  ll n;
  cin>>n;
  ll a[n+1];
  fill(a,a+n+1,0);
  ll i=1;
  while(i<=n)
  {
    cin>>a[i];
    i++;
  }
  ll dp[n+1];
  fill(dp,dp+n+1,0);
  dp[1]=a[1];
  dp[2]=a[2];
  dp[3]=a[3]+max(dp[1],dp[2]);
  i=4;
  while(i<=n)
  {
    dp[i]=a[i]+max(dp[i-1],max(dp[i-2],dp[i-3]));
    i++;
  }
  cout<<dp[n]<<endl;
  return 0;
}
