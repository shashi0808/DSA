#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int p[n],q[n],count=0;
    for(i=0;i<n;i++){
        cin>>p[i]>>q[i];
        if(p[i]<q[i]-1){
            count++;
        }
    }
    cout<<count;
}