#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,r,s,b=0,count1=0,count2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    r=a[0];
    s=0;
    for(int i=0;i<n;i++){
        if(i>=0){
        if(a[i]>b){
            b=a[i];
            q=i;
        }
        if(a[i]<=r){
            r=a[i];
            s=i;
        }
    }
    
    }

    if(a[0]==b&&a[n-1]==r){
        count1=0;
        count2=0;
    }
    else if(a[0]==b&&a[n-1]!=r){
        if(a[s]==r){
        for(int i=s;i!=n-1;i++){
            count2++;
        }
    }
    }
    else if(a[0]!=b&&a[n-1]==r){
        for(int i=q;i!=0;i--){
        int c=a[i-1];
        a[i-1]=a[q];
        a[i]=c;
        count1++;
    }
    }
    else{
    for(int i=q;i!=0;i--){
        int c=a[i-1];
        a[i-1]=a[q];
        a[i]=c;
        count1++;
    }
    if(a[s+1]==r){
        for(int i=s+1;i!=n-1;i++){
            count2++;
        }
        }
    else if(a[s]==r){
        for(int i=s;i!=n-1;i++){
            count2++;
        }
    }
    else if(a[s-1]==r){
        for(int i=s-1;i!=n-1;i++){
            count2++;
        }
        
    }
    }
    cout<<count1+count2<<endl;
}
