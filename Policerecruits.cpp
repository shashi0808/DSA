#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int n,count=0,result=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
     for(int i=0;i<n;i++){
     if(a[i]>0){
         count+=a[i];
     }
     if(a[i]==-1){
          if(count>0){
              count--;
          }else{
              result++;
          }
     }
   }
   cout<<result;
}