#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n,g=0,pos1,l;
 cin>>n;
 int a[n],pos2,count,count1;
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
  for(int i=0;i<n;i++){
      if(a[i]>g){
          g=a[i];
          pos1=i;
      }
      if(a[i]<=l){
          l=a[i];
          pos2=i;
      }
  }
      if(pos1>pos2)
	{
	    cout<<n-1-pos2+pos1-1;
	}
	else
	{
	     cout<<n-1-pos2+pos1;
	}
    
	return 0;
 
  }
 