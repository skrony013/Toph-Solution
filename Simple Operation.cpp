#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        int A,C;
        char B;
        cin>>A>>B>>C;
        if(B=='+')
        {
            cout<<"Case "<<i<<": "<<A+C<<endl;
        }
        else if(B=='-')
        {
            cout<<"Case "<<i<<": "<<A-C<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<A*C<<endl;
        }

    }
}
