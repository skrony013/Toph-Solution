#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int M=0;
    for(int i=1; i<=N; i++)
    {
        M+=i*i;
    }
    cout<<M<<endl;
}
