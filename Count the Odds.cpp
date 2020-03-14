#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int A,B;
    cin>>A>>B;
    long long int r1;
    if(A%2!=0){
        r1=((B-A)/2)+1;
    }
    else
    {

        r1=(B-A+1)/2;
    }
    cout<<r1<<endl;

}
