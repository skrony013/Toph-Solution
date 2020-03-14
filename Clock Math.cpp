#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H,M;
    cin>>H>>M;
    double H1,M1,D;
    H1=30*H;
    M1=5.5*M;
    D=abs(H1-M1);
    if(D>180){
        double D2=360-D;
        printf("%0.5lf",D2);

    }
    else
    printf("%0.5lf",D);
}
