#include<bits/stdc++.h>
using namespace std;
int getMinSteps(int n)
{
  int dp[n+1],i;
  dp[1]=0;
  for(i=2;i<=n;i++)
  {
    dp[i]=1+dp[i-1];
    if(i%2==0) dp[i]=min(dp[i],1+dp[i/2]);
    if(i%3==0) dp[i]=min(dp[i],1+dp[i/3]);
  }
  return dp[n];

}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin>>n;
  cout<<getMinSteps(n);
  return 0;
}
