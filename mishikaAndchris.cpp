#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,m,c,count=0,count1=0; cin>>t;
    while(t--){
        cin>>m>>c;
        if(m>c){
            count++;
        }else if(c>m){
            count1++;
        }
    }
       if(count>count1){
           cout<<"Mishka";
       }else if(count1>count){
           cout<<"Chris";
       }else{
           cout<<"Friendship is magic!^^";
       }
}