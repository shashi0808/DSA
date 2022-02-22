#include<bits/stdc++.h>
using namespace std;
int main()
{
  int s;
  cin>>s;
  for(int i=1;i<=s;i++){
      if(i%2==0){
          cout<<"I love ";
      }else{
          cout<<"I hate ";
      }
      if(i==s){
          cout<<"it";
      }else{
          cout<<"that ";
      }
   
  }
}