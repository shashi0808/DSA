#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 int main()
{
 ll a,b,c,length,breath;
 cin>>a>>b>>c;
 if(a%c==0){
     length=a/c;
 }
 else{
     length=(a/c)+1;
 }
 if(b%c==0){
     breath=b/c;
 }
 else{
     breath=(b/c)+1;
 }
 cout<<length*breath;
 return 0;


}