#include <bits/stdc++.h>
using namespace std;

int main ()
{
 int n,i,count1=0,count2=0,count3=0;
 cin>>n;
 int a[n],b[n],c[n];
 for(int i=1;i<=n;i++){
     cin>>a[i]>>b[i]>>c[i];
    count1+=a[i];
    count2+=b[i];
    count3+=c[i];
 }
 if(count1==0 && count2==0 && count3==0){
     cout<<"YES";
 }else{
     cout<<"NO";
 }
}