#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    if(B<=A && C<=A)
    {
        cout<<"Chocolate"<<endl;
    }
    else if(B>A && C>A)
    {
        cout<<"Chocolate"<<endl;
    }
    else
    {
        cout<<"Ice-cream"<<endl;
    }

}
