#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,flag=0;
   cin>>a>>b;
   while(b>=a){
       a=3*a;
       b=2*b;
       flag++;
   }
   cout<<flag;
   return 0;
}