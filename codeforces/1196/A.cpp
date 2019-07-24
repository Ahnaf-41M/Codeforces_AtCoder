#include<stdio.h>
int main()
{
    int i,q;
    long long int a,b,c, sum = 0;
    scanf("%d",&q);

    for(i = 1; i <= q; i++)
    {
        scanf("%lld %lld %lld",&a, &b, &c);
        sum = a+b+c;
        printf("%lld\n",sum/2);
        sum = 0;
    }
    return 0;
}
