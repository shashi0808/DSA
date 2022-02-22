#include<bits/stdc++.h>
using namespace std;
int main()
{
  float c=0,avg;
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
      c+=a[i];
  }
   avg=c/n;
   cout<<avg;
}