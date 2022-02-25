#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int i=1;
	    while(n-i>=0)
	    {
	        n=n-i;
	        i++;
	    }
	    cout<<(--i)<<endl;
	}
	return 0;
}