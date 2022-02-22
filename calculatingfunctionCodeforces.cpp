#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ll n,k;
 cin>>n;
 if(n%2==0){
     k=n/2;
     cout<<k;
 }else{
     k=(n+1)/2;
     cout<<-k;
 }
}