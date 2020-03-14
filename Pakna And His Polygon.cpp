#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        int a;
        cin>>a;
        double result=sqrt(3)*3*(a*a);
        double r2=result/2;
        printf("%0.6lf\n",r2);
    }
}
