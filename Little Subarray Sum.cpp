#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,A,B;
    cin>>N>>A>>B;
    int a[N];
    int sum=0;
    for(int i=0; i<N; i++)
    {
        cin>>a[i];
    }

    for(int i=A; i<=B; i++)
    {
        sum+=a[i];

    }
    cout<<sum<<endl;


}

