#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ll t,c,l;
 cin>>t;
 while(t--){
     ll a,b;
     cin>>a>>b;
     c=__gcd(a,b);
     l=a*b/c;
     cout<<c<<" "<<l<<endl;
 }

}
