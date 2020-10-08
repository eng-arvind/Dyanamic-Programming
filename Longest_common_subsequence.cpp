#include<bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2,int n,int m)
{
  if(n==0 || m==0 )
  return 0;
  if(s1[n-1]==s2[m-1])
  return 1+lcs(s1,s2,n-1,m-1);
  else
  return max(lcs(s1,s2,m,n-1),lcs(s1,s2,m-1,n));
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s1,s2;
  cin>>s1>>s2;
  int n,m;
  n=s1.length();
  m=s2.length();
  cout<<lcs(s1,s2,n,m);
  return 0;

}
