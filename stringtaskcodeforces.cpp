#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
 int x=0;
   string s;
   cin>>s;
   transform(s.begin(),s.end(),s.begin(),::tolower);
   for(int i=0;i<s.length();i++){
       if(s[i]==97 ||s[i]==65 || s[i]==101 ||s[i]==69 ||s[i]==105 ||s[i]==73 ||s[i]==111 ||s[i]==79 ||s[i]==117 ||s[i]==85 ||s[i]==121 ||s[i]==89){
           continue;
       }else{
           cout<<"."<<s[i];
       }
   }
}   