#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,cnt=1;
    if(n==1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        for(int i=1; i<n; i++)
        {
            sum=cnt*2;
            cnt=sum;
        }
        cout<<sum<<endl;
    }




}


