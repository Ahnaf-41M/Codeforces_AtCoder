#include<stdio.h>
int main()
{
    long long int i, n, k, w, sum = 0;

    scanf("%lld %lld %lld",&k, &n, &w);

    for(i = 1; i <= w; i++)
    {
        sum = sum + i * k;
    }
    if(sum > n)
    {
        printf("%d\n",sum-n);
    }
    else
    {
        printf("0\n");
    }
    return 0;

}
