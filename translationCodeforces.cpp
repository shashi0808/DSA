#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a=0,counter=0;
    string s,p;
    cin>>s;
    cin>>p;
    reverse(s.begin(), s.end());
    if(p==s){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}  
  