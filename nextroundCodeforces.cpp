#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,k,i,a[100];
 int count=0;
 
 cin>>n>>k;
 
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
     }
   for( i =0; i< n ; i++){

     if(a[i]>0)
        {
        if((a[i]>=a[k-1]))
            count++;
    }
   }
    cout<<count;
  
}