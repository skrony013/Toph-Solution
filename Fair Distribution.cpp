#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X,Y;
    cin>>X>>Y;
    if(Y%X==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        int r=Y%X;

        cout<<X-r<<endl;
    }

}

