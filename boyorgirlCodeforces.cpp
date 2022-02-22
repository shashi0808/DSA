#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int c;
    string s;
    cin>>s;
    set<char>sh;
    for(int i=0;i<s.size();i++){
        sh.insert(s[i]);
    
    }
    c=sh.size();
  if(c%2==0){
      cout<<"CHAT WITH HER!";
  }else{
      cout<<"IGNORE HIM!";
  }

  return 0;
   
}