#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y;
    while(scanf("%lld %lld",&x,&y)!=EOF)
    {
        if(x>=y)
        {
            int temp=y;
            y=x;
            x=temp;
        }
        long long sum1,sum2,sum3,sum;
        sum1=(y*(y+1))/2;
        sum2=x-1;
        sum3=(sum2*(sum2+1)/2);
        sum=sum1-sum3;


        cout<<"Sum of "<<x<<" to "<<y<<" is -> "<< sum<<";"<<endl;

    }
}
