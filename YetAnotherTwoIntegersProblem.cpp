#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
    int a,b,c;
    cin>>a>>b;
    if(a>b || b>a){
       if(a>b){
           c=a-b;
           if(c%10!=0){cout<<(c/10)+1;}
           else{cout<<(c/10); }
       }else{
           c=b-a;
        if(c%10!=0){cout<<(c/10)+1;}
           else{cout<<(c/10); }
       } 
    }else{
        cout<<"0";
    }
    cout<<endl;
 }
}