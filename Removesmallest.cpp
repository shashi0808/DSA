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
     for(int i=1;i<n;i++){
        diff=max(diff,a[i]-a[i-1]);
     }
     if(diff>1){
         cout<<"NO"<<endl;
     }else{
         cout<<"YES"<<endl;
     }
 }
}