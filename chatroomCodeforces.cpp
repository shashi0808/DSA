#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a=0,counter=0;
    string s,p;
    cin>>s;
    p="hello";
    for(i=0;i<s.size();i++){
     if(s[i]==p[a]){
         counter++;
         a++;
     }
    }
    if(counter>4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}