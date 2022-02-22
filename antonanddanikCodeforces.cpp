#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,count1=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            count++;
        }else{
            count1++;
        }
    }
   if(count>count1){
        cout<<"Anton";
    }else if(count1>count){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
}