#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void answer()
{
 int n,t;
 int ptr=1;
 cin>>n>>t;
 int a[n];
 for(int i=0;i<n;i++)
 {
    cin>>a[i]; 
 }
   for (int i = 0; i < n;)
    {      
        if(ptr == t)
        {
            cout<<"YES";
            break;
        }
        if( ptr > t)
        {
            cout<<"NO";
            break;
        }
        ptr +=a[i];
        i = ptr-1;     
    }
}
int main()
{
    ll t=1;
    while(t--){
        answer();
    }
}