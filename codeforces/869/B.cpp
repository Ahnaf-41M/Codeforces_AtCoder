#include<stdio.h>
int main()
{
    long long int a,b,i;
    scanf("%lld %lld",&a, &b);
    long long int result;
    result = 1;
    if(b-a < 5){
    for(i = a+1; i <= b; i++)
    {
        result = result * (i%10);
    }
    printf("%lld\n",result%10);}
    else
        printf("0\n");

    return 0;
}
