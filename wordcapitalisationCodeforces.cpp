#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s,ch;
    cin>>s;
      if(s[0]>=97){
          s[0]=s[0]-32;
    for(int i=0;i<s.size();i++){
        
        cout<<s[i];
    }
    }
      else{
          cout<<s;
      }

  return 0;
   
}