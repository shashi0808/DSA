#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
       
    for(k=1;k<=n;k++){
     for(i=1;i<=n;i++){
       if(a[i]==k){
           cout<<i<<" ";
       }
    }
}
}