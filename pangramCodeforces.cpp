#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char>si;
    for(int i=0;i<n;i++){
        si.insert(s[i]);
    }
    count=si.size();
    if(count==26){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
   
}