
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void answer()
{
   int n,i,j,temp,c=0,m=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int p = 0;
    int q = n-1;
 
    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(a[p]>=a[q])
            {
                c+=a[p];
                p++;
            }
            else
            {
                c+= a[q];
                q--;
            }
        }
        else
        {
            if(a[p]>=a[q])
            {
                m+=a[p];
                p++;
            }
            else
            {
                m+= a[q];
                q--;
            }
        }
    }
 
    cout<<c<<" "<<m<<endl;
 
}
int main()
{
    ll t=1;
    //cin>>t;
    while(t--){
        answer();
    }
}