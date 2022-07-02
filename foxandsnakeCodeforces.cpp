 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() 
{
  long long int n,m,j,i;
  cin>>n>>m;
  for(i=1;i<=n;i++)
   {
       for(j=1;j<=m;j++)
       {
           if(i%2!=0)
           {
            cout<<"#";
           }
           else
           {
               if((i/2)%2!=0)
               {
                   if(j==m)
                   {
                   cout<<"#";
                   }
                   else 
                   {
                   cout<<".";
                   }
               }
               else
               {
                   if(j==1)
                   {
                   cout<<"#";
                   }
                   else 
                   {
                       cout<<".";
                   }
               }
           }
   }
   cout<<endl;
}
  return 0;
 
}
