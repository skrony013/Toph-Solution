#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        int a1,a2,a3,n;
        cin>>a1>>a2>>a3>>n;
        if((a2-a1)==(a3-a2))
        {

            int r=a1+(n-1)*(a2-a1);
            printf("Case %d: %d\n",i,r);
        }

        else
        {
            printf("Case %d: Error\n",i);
        }

    }

}
