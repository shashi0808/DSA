include "bits/stdc++.h"
using namespace std;
 
typedef long long ll;
 
const int N = 2 * 1e5 + 10;
 
ll res;
ll a[N];
 
 
int main()
{
	int n, m;
	cin >> n >> m;
 
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			cout << string(m, '#') << "\n";
		}
		else if (i % 4 == 1) {
			string a(m, '.');
			a[m - 1] = '#';
			cout << a << "\n";
		}
		else if (i % 4 == 3) {
			string a(m, '.');
			a[0] = '#';
			cout << a << "\n";
		}
	}
}