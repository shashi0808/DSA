#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int x,n,z,total;
       cin>>x>>n;
       z=x/3;
       x=x-z;
       total=x*n;
       cout<<total<<endl;
    }
}

