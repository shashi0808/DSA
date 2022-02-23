#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        int max=0;
        cin>>n>>k;
        for (int i=1;i<=k;i++)
	    {
	        if(n%i>max)
	        max=n%i;
	    }
	    cout<<max<<endl;
    }
}