#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main()
{
 ll n,count=0; cin>>n;
 string a[n];
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
 for(int i=0;i<n;i++){
     if(a[i]=="Tetrahedron"){
         count=count+4;
     }else if(a[i]=="Cube"){
         count=count+6;
     }
     else if(a[i]=="Octahedron"){
         count=count+8;
     }
      else if(a[i]=="Dodecahedron"){
         count=count+12;
     }
       else if(a[i]== "Icosahedron"){
         count=count+20;
     }
 }
 cout<<count;
}