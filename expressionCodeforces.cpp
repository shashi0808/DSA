#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,p,m,n,o,q;
    cin>>a>>b>>c;
    m=a+(b*c);
    n=a*(b+c);
    o=a*b*c;
    p=(a+b)*c;
    q=a+b+c;
    if(m>=n && m>=o && m>=p && m>=q){
        cout<<m;
    } else   if(n>=m && n>=o && n>=p && n>=q){
        cout<<n;
    }else    if(o>=n && o>=m && o>=p && o>=q){
        cout<<o;
    } else   if(p>=n && p>=o && p>=m && p>=q){
        cout<<p;
    } else   if(m>=n && m>=o && m>=p && m>=q){
        cout<<m;
    } else if(q>=n && q>=o && q>=p && q>=m){
        cout<<q;
    } 
    return 0;    
}