#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ll n,k,m;
 cin>>n>>k;
 m=(n+1)/2;
 if(k<=m){
     cout<<2*k-1;
 }else{
     k=k-m;
     cout<<2*k;
 }
}