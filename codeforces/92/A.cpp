#include<stdio.h>
int main()
{
    int n,m,i,s = 0, count = 0;

    scanf("%d %d",&n,&m);

    for(i = 1; i <= n; i++)
    {
        count+=i;


        if(count < m && i ==n)
        {
            i = 0;
        }
        if(count>m)
        {
            break;
        }
        s = m - count;
    }
    printf("%d\n",s);
    return 0;
}
