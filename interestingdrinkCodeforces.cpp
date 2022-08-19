#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void answer()
{
    ll n;  cin>>n;
    vector<ll>x(n);
    for(auto &i : x){
        cin>>i;
    }
    sort(x.begin(),x.end());
    ll q ;  cin>>q;
    vector<ll>m(q);
    for(auto &i : m){
        cin>>i;
        cout<<upper_bound(x.begin(),x.end(),i)-x.begin()<<endl;
    }
}
int main()
{
    ll t=1;
    while(t--){
        answer();
    }
}