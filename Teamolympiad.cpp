 
#include "bits/stdc++.h"
using namespace std;
const int N=100005;
vector<int>v[4];
int main(){
    int n;
    cin>>n;
    int a[N];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if (a[i] == 1) v[1].push_back(i + 1);
        if (a[i] == 2) v[2].push_back(i + 1);
        if (a[i] == 3) v[3].push_back(i + 1);
    }
    
    int t = min(min(v[1].size(),v[2].size()),v[3].size());
    cout<<t<<endl;
    for (int i=0;i<t;i++){
        cout<<v[1][i]<<" "<<v[2][i]<<" "<<v[3][i]<<endl;
    }
 
    return 0;
}