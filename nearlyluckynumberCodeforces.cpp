#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,counter=0;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++){
        if(s[i]=='4' || s[i]=='7'){
            counter++;
        }
    }
    if(counter==7 || counter==4){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}