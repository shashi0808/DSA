#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n],count=1,count1=1;
for(int i=0;i<n;i++){
    cin>>a[i];
}
   for(int i=0;i<n-1;i++){
    if(a[i]<=a[i+1]){
        count++;
       if(count>=count1){
           count1=count;
       }
    }else{
        count=1;
    }
}

    cout<<count1;
}


