#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N;
    cin>>N;
    long long int sum=(N*(N+1))/2;
    int M;
    cin>>M;
    int temp=0,x;
    for(int i=1; i<=M; i++)
    {
        cin>>x;
        sum-=x;

    }
//    int r=sum-temp;
//    cout<<r<<endl;
    cout<<sum<<endl;
}
