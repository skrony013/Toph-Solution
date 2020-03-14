#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int cnt=0;
    while(x!=0)
    {
        int rem1,rem2;
        rem1=x%10;
        x=x/10;
        rem2=y%10;
        y=y/10;
        if(rem1+rem2>=10)
        {
            cnt++;
        }
    }
    if(cnt!=0)
    {
        cout<<"Yes"<<endl;

    }
    else
    {
        cout<<"No"<<endl;
    }
}
