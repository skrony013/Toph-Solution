#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }
    if(cnt>0)
    {
        cout<<"No"<<endl;
    }
    else
    {

        cout<<"Yes"<<endl;
    }
}
