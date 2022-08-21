#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void answer()
{
  int x,y,n,k,c;
  cin>>x>>y>>n;
  c=(n-y)/x;
  k=c*x+y;
   cout<<k<<endl; 
}
int main()
{
    ll t; cin>>t;
    while(t--){
        answer();
    }
}