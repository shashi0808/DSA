#include<bits/stdc++.h>
using namespace std;
int main()
{
   set<int> s;
   int n,x,y;
   cin>>n;
   int p[101],q[101];
   cin>>x;
   for(int i=0;i<x;i++){
       cin>>p[i];
       s.insert(p[i]);
   }
   cin>>y;
   for(int i=0;i<y;i++){
       cin>>q[i];
       s.insert(q[i]);
   }
   if(s.size()==n){
       cout<<"I become the guy.";
   }else{
       cout<<"Oh, my keyboard!";
   }
   return 0;
}