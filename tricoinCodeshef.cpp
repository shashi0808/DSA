#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	        n=n-i;
	        count++;
	    }
	    cout<<count<<endl;
}
return 0;
}