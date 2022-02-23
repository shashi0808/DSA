#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<int> s;
  int a,b,c,d,count=0;
  cin>>a>>b>>c>>d;
  s.insert(a);
  s.insert(b);
  s.insert(c);
  s.insert(d);
  count=s.size();
  cout<<4-count;
} 