#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float sum=0;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        printf("%0.5f\n",sum/i);

    }
}
