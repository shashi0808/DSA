#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int k,r,j;
   cin>>k>>r;
   for(int i=1;i<1e5 + 5;i++){
       j=k*i;
       if(j%10==r){
           cout<<i;
           return 0;
       }else if(j%10==0){
           cout<<i;
           return 0;
       }
   }
}