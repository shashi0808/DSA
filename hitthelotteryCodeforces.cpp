#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main()
{
  ll n ;cin>>n;
    ll count=0;
    while(n>0){
    	if(n>=100){
    		count++;
    		n=n-100;
    	}
    	else if(n>=20){
    		count++;
    		n=n-20;
    	}
    	else if(n>=10){
    		count++;
    		n=n-10;
    	}
    	else if(n>=5){
    		count++;
    		n=n-5;
    	}
    	else if(n>=1){
    		count++;
    		n=n-1;
    	}
    }
    cout<<count<<endl;
    

}