#include<bits/stdc++.h>
using namespace std;
int main(){
int T;
cin>>T;
for(int i=1;i<=T;i++){
    long long int n;
    cin>>n;
    if(n==1){
        cout<<"1"<<endl;
        continue;
    }
    else if(n%2==0){
        long long a=n/2;
        cout<<(a+(a*(-2)))<<endl;
    }
    else{
       long long a=n/2;
        cout<<((a+1)+(a*(-2)))<<endl;

    }
}
}
