#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,s=0,count=0;
    cin>>n;
    int a[n],b[n];
    for(i=1;i<=n;i++){
        cin>>a[i]>>b[i];
        s=s+b[i]-a[i];
  
       if (count<=s){
         count=s;
      
       }
    }
    cout<<count;
}