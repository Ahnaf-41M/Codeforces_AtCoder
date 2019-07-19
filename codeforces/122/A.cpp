#include<stdio.h>
int main()
{
    int n,i, sum=0, count = 0, rem = 0,m,p;

    scanf("%d",&n);
    m = n;
    p = n;

    while(n>0)
    {
        rem = n%10;
        count++;
        n = n/10;
    }
    for(i = 1; i <= count; i++)
    {
        if(m%10 == 4 || m%10 == 7)
        {
            sum+=1;
            m = m/10;
        }
        else if(m%4 == 0 || m % 7==0 || m % 47 == 0 || m % 74 ==0|| m % 77 == 0|| m%44 == 0
                || m%447 == 0|| m%474 == 0 || m % 477 == 0|| m%444 == 0|| m%777==0 ||
                m % 774 ==0 || m % 747 == 0 || m%744 == 0 )

        {
            break;
        }

        else
            break;

    }
    if(count == sum)
        printf("YES\n");
        else if(p%4 == 0 || p % 7==0 || p % 47 == 0 || p % 74 ==0|| p % 77 == 0|| p%44 == 0
                || p%447 == 0|| p%474 == 0 || p % 477 == 0|| p%444 == 0|| p%777==0 ||
                p % 774 ==0 || p % 747 == 0 || p%744 == 0 ){
                printf("YES\n");}
    else
        printf("NO\n");
    return 0;
}
