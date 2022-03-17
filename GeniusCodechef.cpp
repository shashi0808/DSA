#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
while(t--){
    int N,X;
    cin>>N>>X;
    int a=0,b=0,c=0;
    
    if(X%3==0){
        a+=(X/3);
    }
    else if(X%3==1){
        a+=(X/3)+1;
        b+=2;
    }
    else if(X%3==2){
        a+=X/3+1;
        b+=1;
    }

    if(a+b<=N){
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<N-a-b<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}

}
	

