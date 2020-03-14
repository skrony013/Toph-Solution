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
        float sum=0.0;
        for(int i=1; i<=N; i++)
        {
            float p;
            cin>>p;
            sum+=p;

        }
        printf("Case %d: %.3f\n",i,sum/N);

    }

}
