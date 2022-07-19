#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n,m,pos=1,count=0,x;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>x;
        if(x>pos){
            count+=x-pos;
        }else if(x<pos){
            count+=n+x-pos;
        }
        pos=x;
    }
    cout<<count;
}