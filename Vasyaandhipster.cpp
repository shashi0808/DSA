#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int a,b,rem,p;
   cin>>a>>b;
   if(a>b){
       rem=a-b;
       p=b;
   }else if(b>a){
       rem=b-a;
       p=a;
   }else{
       rem=0;
       p=a;
   }
   cout<<p<<" "<<rem/2;
}