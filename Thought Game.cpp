#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int x,y;
    int avg;
    for(int i=1; i<=T; i++)
    {
        cin>>x>>y;
        avg=(x+y)/2;
        if(avg%2==0){
            cout<<"Sadia will be happy."<<endl;
        }
        else{
            cout<<"Oops!"<<endl;
        }
    }
}
