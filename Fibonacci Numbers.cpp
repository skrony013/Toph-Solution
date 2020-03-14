#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int f=0,s=1,t=0;
    for(int i=0;i<N;i++){
        t=f+s;
        f=s;
        s=t;
    }
    cout<<f<<endl;

}
