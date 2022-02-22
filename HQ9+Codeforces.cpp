#include<bits/stdc++.h>
using namespace std;
int main()
{
  int counter=0;
 string p;
 cin>>p;
 for(int i=0;i<p.size();i++){
   if(p[i]=='H' ||p[i]=='Q' || p[i]=='9' ){
       counter=1;
   }
 
 }
  if(counter==1){
    cout<<"YES";
  }else{
    cout<<"NO";
  }
 
 return 0;
}