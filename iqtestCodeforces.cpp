#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,even=0,odd=0,pos,pos1;
   cin>>n;
   int a[n];
   for(int i=1;i<=n;i++){
       cin>>a[i];
   }
      for(int i=1;i<=n;i++){
       if(a[i]%2==0){
           even++;
           pos=i;
       }else{
           odd++;
          pos1=i;
       }
   }
   if(even>odd){
       cout<<pos1;
   }else{
       cout<<pos;
   }
}