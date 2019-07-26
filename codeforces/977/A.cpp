#include<stdio.h>
int main()
{
    long long int n;
    int i,k;

    scanf("%lld %d",&n,&k);

    for(i = 1;i  <= k; i++)
    {
        if(n%10 != 0)
        {
            n-=1;
        }
        else
            n = n / 10;
    }
    printf("%lld\n",n);

    return 0;
}
