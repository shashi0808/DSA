#include<iostream>
#include<algorithm>
#include<bitset>
#include<cmath>
#include<cstring>
#include<climits>
#include<deque>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<fstream>
#include<chrono>
using namespace std;
 
typedef long long ll;
typedef pair<ll,ll> p64;
typedef vector<ll> v64;
const int N = 2 * 1e5 + 10;
const ll inf = 1e18 + 100;
const ll mod = 1e9 + 7;
 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,s,e) for(long long i=s;i<=e;i++)
#define brep(i,s,e) for(long long i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define DANGER std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
void solve() {
    ll n;
    cin>>n;
    if(n % 4) {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    ll sum = 0;
    for(int i = 2; i <= n ; i+= 2) {
        cout<<i<<" ";
        sum += i;
    }
    int i = 1 , k = 1;
 
    while(k < n / 2) {
        cout<<i<<" ";
        sum -= i;
        i += 2;
        k++;
    }
    cout<<sum<<" ";
    cout<<"\n";
}
int main()
{
    DANGER;
    ll t = 1;
    cin>>t;
    while(t--) {
        solve();
    }
return 0;
}