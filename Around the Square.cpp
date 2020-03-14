#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main()
{
    long long a,r1,r2,r3,r4;
    while(scanf("%lld %lld %lld %lld %lld",&a,&r1,&r2,&r3,&r4)!=EOF)
    {
        double area=(a*a)-((0.25*(PI*r1*r1))+(0.25*(PI*r2*r2))+(0.25*(PI*r3*r3))+(0.25*(PI*r4*r4)));
         printf("%.3lf\n",area);
    }
}
