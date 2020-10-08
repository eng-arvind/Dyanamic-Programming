#include<bits/stdc++.h>
#define ll int
#define modu 1000000007
using namespace std;
int C(int n, int k)
{
int dp[k+1];
memset(dp,0,sizeof(dp));
dp[0]=1;
for(int i=1;i<=n;i++)
{
for(int j=min(i,k);j>0;j--)
dp[j]=(dp[j]+dp[j-1])%modu;
}
return dp[k]%modu;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
    ll n,r;
    cin>>n>>r;
  cout<<C(n,r)<<endl;
  }
  return 0;
}
