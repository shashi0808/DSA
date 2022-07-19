#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n; cin>>n;
 int a[n],k,l,count=0;
 cin>>k;
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
 sort(a,a+n);
 l=5-k;
  for(int i=0;i<n;i++){
     if(a[i]<=l){
         count++;
     }
 }
 cout<<count/3;
}