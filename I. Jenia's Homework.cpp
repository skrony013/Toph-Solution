#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int n;
    for(int i=1; i<=T; i++)
    {
        cin>>n;
        double a,p;
        a=3.14159265359*((sqrt(n)/2)*(sqrt(n)/2));
        p=2*3.14159265359*(sqrt(n)/2);
        cout<<std::setprecision(16)<<n-a<<" "<<p<<endl;


    }
    return 0;
}
