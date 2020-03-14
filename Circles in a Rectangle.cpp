#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    if(T<11)
    {
        for(int i=1; i<=T; i++)
        {
            float R;
            cin>>R;
//            float pi=3.1416;
            float result=(R*R)*(8-(2*3.1416));
            printf("Case %d: %0.2f\n",i,result);
        }
    }



}
