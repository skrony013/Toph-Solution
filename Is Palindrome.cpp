#include<bits/stdc++.h>
using namespace std;
int main()
{
    char S[100];
    cin.getline(S,100);
    bool flag=0;
    int l=strlen(S);
    for(int i=0; i<l; i++)
    {
        if(S[i]!=S[l-i-1])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }




}
