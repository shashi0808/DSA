#include<iostream>
using namespace std;
int main()
{
    int k,w,n,i,total=0,borrow;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++){
        total+=k*i;
        
    }
    borrow=total-n;
   if(borrow>0){ 
   cout<<borrow;
   }
   else{
       cout<<"0";
   }
}