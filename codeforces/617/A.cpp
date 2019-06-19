#include<stdio.h>
int main()
{
    long long int x;
    scanf("%lld",&x);

    if(x==1 || x==2 || x==3 || x==4 || x==5)
    {
        printf("1\n");
    }
    else
    {
        if(x%5 == 0)
        {
            printf("%lld\n",x/5);
        }
        else
        {
            printf("%lld\n",(x/5)+1);
        }
    }

    return 0;
}
