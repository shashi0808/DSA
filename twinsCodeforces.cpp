#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,sum=0,sum1=0,count=0;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
     cin>>a[i];
     sum+=a[i];
   }
   sort(a,a+n);
   for(i=n-1;i>=0;i--){
       if(sum>=sum1){
           sum-=a[i];
           sum1+=a[i];
           count++;
       }
        else
       break;
   }
   cout<<count;
   return 0;
}