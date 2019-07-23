#include<stdio.h>
int main()
{
    long long int n,m,p,rem = 0,count = 0,x,y,sum = 0, z = 0;

    scanf("%lld",&n);

    p = n;
    m = n;

    while(n>0)
    {
        rem = n%10;
        if(rem == 4 || rem == 7)
        {
            count++;
        }
        else{
            count = count;

        }
        n=n/10;
    }
    if(count>0){
    x= count;
    while(count>0)
    {
        y = count%10;
        if(y == 4|| y==7)
        {
            sum++;
        }
        else
        {
            z = 1;
        }
        count=count/10;
    }
    if(z==1)
        printf("NO\n");
    else
        printf("YES\n");}
        else
            printf("NO\n");
    return 0;
}
