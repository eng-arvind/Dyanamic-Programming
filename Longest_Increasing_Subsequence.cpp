#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int lis(int a[],int n)
{
  int lis[n];
  lis[0]=1;
  int mx=1;
  for(int i=1;i<n;++i){
    lis[i]=1;
    for(int j=0;j<i;++j){
      if(a[i]>a[j] && lis[i] < lis[j]+1)
      lis[i]=lis[j]+1;
      mx=max(lis[i],mx);
    }
  }
  return mx;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;++i) cin>>a[i];
  cout<<lis(a,n);
  return 0;
}
