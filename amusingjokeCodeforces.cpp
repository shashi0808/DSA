#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main()
{
 string s,p,q,z;
 cin>>s>>p>>q;
 z=s+p;
 sort(q.begin(),q.end());
 sort(z.begin(),z.end());
   if(z==q){
     cout<<"YES";
 }else{
     cout<<"NO";
 }
}