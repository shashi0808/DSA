#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int count =1;
  int maxi =1;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  for(int i=0;i<n-1;i++){

      if(a[i]<=a[i+1]){
          count++;
          maxi = max(count,maxi);
      }else{
          count =1;
      }
  }
cout<<maxi;

return 0;
}