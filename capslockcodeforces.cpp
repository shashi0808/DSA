#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    cin>>s;
    for(int i=1;i<s.size();i++){
   if(s[0]>=97 && s[0]<=122 && s[i]>=65 && s[i]<=90){
          transform(s.begin(), s.end(), s.begin(), ::tolower);
    s[0]=toupper(s[0]);
    cout<<s;
    break;
   }else{
       cout<<s;
       break;
   }
   }
}