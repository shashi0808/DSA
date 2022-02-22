#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int a,b,c;
   int count = 0;
  cin>>n;
while(n--){
    cin>>a>>b>>c;
   if(a==1 && b== 1){
        count++;
       
    }
     else if(b==1 && c== 1){
        count++;
        
    } 
   else if(c==1 && a==1){
        count++;
        
    }
  else  if(a==1 && b==1 && c==1){
        count++;
        
    }
    
}

cout<<count;

    return 0;
}