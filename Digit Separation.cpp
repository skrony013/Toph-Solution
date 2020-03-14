#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1001];
    int i,sum;

    while (scanf("%s",str) != EOF)
    {
        sum = 0;

        for (i=0; str[i]; i++)
            sum += str[i]-'0';

        printf("%d\n",sum);
    }

    return 0;
}

