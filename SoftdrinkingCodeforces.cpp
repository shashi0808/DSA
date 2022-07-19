#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n,k,l,c,d,p,nl,np,mm,salt,lime,toast;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 mm=(k*l)/nl;
 lime=c*d;
 salt=p/np;
// cout<<mm<<" "<<lime<<" "<<salt<<endl;
 toast=min(min(mm,lime),min(mm,salt))/n;
 cout<<toast;
}