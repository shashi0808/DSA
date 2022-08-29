#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void answer()
{
int n;
cin>>n;
int a[n];
int even=0,odd=0;
for(int i=0;i<n;i++) {cin>>a[i]; if(a[i]%2==0 && i%2!=0) odd++;
if(a[i]%2==1 &&i%2==0)even++;
 
}
if(even==odd) cout<<even<<endl;
else cout<<-1<<endl;
}
int main()
{
    ll t; cin>>t;
    while(t--){
        answer();
    }
}