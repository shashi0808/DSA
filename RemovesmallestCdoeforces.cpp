#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
     int n,diff=0;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
      sort(a,a+n);
     for(int i=0;i<n-1;i++){
        diff=max(diff,a[i+1]-a[i]);
     }
     if(diff>1){
         cout<<"NO"<<endl;
     }else{
         cout<<"YES"<<endl;
     }
 }
}