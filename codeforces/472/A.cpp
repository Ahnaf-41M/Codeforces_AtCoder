#include<stdio.h>
int main()
{
    long long int n;

    scanf("%lld",&n);

    if(n%2 == 0)
    {
        if((n/2)%2 != 0)
        printf("4 %lld\n",n-4);
        else
            printf("%lld %lld\n",n/2,n/2);
    }
    else
    {
        printf("%lld 9\n",n-9);
    }
    return 0;
}
