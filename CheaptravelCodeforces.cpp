#include <iostream>
using namespace std;
 
int main() {
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	 cout<<(n/m) * min( a * m , b) + min(n % m * a, b);
	
 
	return 0;
}