#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,t;
    cin>>t;
    while(t--){
    cin>>i>>j;
    if(i>j){
        k=i%j;
    }else{
        k=j-i;
    }
    cout<<k<<endl;
    }
    
}