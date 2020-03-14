#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        int N;
        cin>>N;
        if(N<=2)
        {
            printf("Case %d: Tie\n",i);
        }
        else if(N%2==0)
        {
            printf("Case %d: CodeMask\n",i);
        }
        else
        {
            printf("Case %d: CodeNewtons\n",i);
        }
    }
}
