#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int flag=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];

    }
    for(int i=1; i<=n-1; i++)
    {
        if(a[i]<a[i+1])
        {
            flag++;
        }
    }
    if(flag==0)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
}
