#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    getline(cin, s);
    set<char> u;
    if(s == "{}"){
        cout << 0 << endl;
    }else{
        for(int i=0; i<s.length(); i++){
            if (s[i] != ',' && s[i] != ' ' && s[i] != '{' && s[i] != '}'){
                u.insert(s[i]);
            }
        }
        cout << u.size() << endl;
    }
 
}