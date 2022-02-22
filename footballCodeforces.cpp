#include <bits/stdc++.h>
using namespace std;

int main ()
{
string s;
int count1=0;
int count=1;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]==s[i+1]){
        count++;
       if(count>=count1){
           count1=count;
       }
    }else{
        count=1;
    }
    
}

if(count1>=7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}