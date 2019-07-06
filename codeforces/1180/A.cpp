#include<stdio.h>
int main()
{
    int n, sum;

    scanf("%d",&n);

    sum = n * n + (n-1) * (n-1);

    printf("%d\n",sum);

    return 0;
}
