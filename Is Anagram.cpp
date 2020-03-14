#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    bool flag;
    int m=a.size();
    int n=b.size();
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(m==n)
    {
        if(a==b)
        {
            flag=true;
        }
        if(flag==true)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
    else
    {
        cout<<"No";
    }

}
