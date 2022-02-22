#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,count=0,count1=0,i,c;
    cin>>n>>h;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    
    if(a[i]<=h){
        count++;
    }else if(a[i]>h){
        count1++;
      
    }
}
 c=count+2*count1;
    cout<<c;
}