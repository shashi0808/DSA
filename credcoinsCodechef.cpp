#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int x,y,z;
       cin>>x>>y;
       z=x*y;
       if(z>=100){
           cout<<z/100<<endl;
       }else{
           cout<<"0"<<endl;
       }
    }
}

