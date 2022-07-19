#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int n,k,rem=0,count=0;
   cin>>n>>k;
   rem=240-k;
   for(int i=1;i<=n;i++){
      if(rem>=0){
         rem=rem-5*i;
         count++;
     }
   }
    if(rem<0){
        cout<<count-1;
    }else{
        cout<<count;
    }
}