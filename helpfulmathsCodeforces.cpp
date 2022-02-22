#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
  string ans = "";
     sort(s.begin(),s.end());
   for(int i=0;i<s.length();i++){
       if(s[i]== '+'){
           continue;
       }
     else if(i==s.size()-1){
           cout<<s[i];
           return 0;
       }
  else {
    cout<<s[i]<<"+";
       }
}
    return 0;
}