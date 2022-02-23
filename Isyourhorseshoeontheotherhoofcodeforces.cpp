#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int a[4],i,count=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
        s.insert(a[i]);
        count=s.size();
    }
    cout<<4-count;
}