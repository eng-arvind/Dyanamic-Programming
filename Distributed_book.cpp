#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll n;
  cin>>n;
  ll dp[n+1];
  fill(dp,dp+n+1,0);
  dp[0]=1;
  dp[1]=0;
  ll i=2;
  while(i<=n)
  {
    dp[i]=(i-1)*(dp[i-1]+dp[i-2]);
    i++;
  }
  cout<<dp[n]<<endl;
}
