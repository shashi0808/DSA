#include <bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{string s;
 cin>>s;
 int i,j,c=0,k;
 j=s.size();
 for(i=0;i<j;i++)
 { if(s[i]!='0') {  c++;  }}
 cout<<c<<"\n";
 for(i=0;i<j;i++)
 { if(s[i]!='0')
 {cout<<s[i];
  for(k=j-1;k>i;k--)
  {
      cout<<"0";
  }
  cout<<" ";} }
  cout<<"\n";
 
 
  }}
