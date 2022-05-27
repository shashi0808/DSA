#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,k,f;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0){
            cout<<"0"<<endl;
        }
        else{
         k=a%b;
         f=b-k;
         cout<<f<<endl;
    }
    }
}