#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,x=0,a;
 string s;
 cin>>n;
 while(n--){
 cin>>s;
 if(s=="++X" || s=="X++"){
     x=x+1;
 } else{
     x=x-1;
 }
 }
 cout<<x;
 return 0;
}