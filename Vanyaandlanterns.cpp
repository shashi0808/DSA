#include "bits/stdc++.h"
using namespace std;
 
typedef long long ll;
 
const int N = 2 * 1e5 + 10;
 
ll res;
ll a[N];
 
 
 
 
void solve()
{
 
    
      double n,m;
     cin>>n>>m;
     vector<double>v;
     for(ll i=0;i<n;i++)
     {
         double x;
         cin>>x;
         v.push_back(x);
     }
     sort(v.begin(),v.end());
     
     double ans=0;
     for(ll i=0;i<n-1;i++)
     {
         ans=max(ans,(v[i+1]-v[i])/2);
     }
     ans=max(ans,(v[0]));
      ans=max(ans,(m-v[n-1]));
      cout.precision(9);
      cout<<ans;
  
  
 
}
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
   // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}