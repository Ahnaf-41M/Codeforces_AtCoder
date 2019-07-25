#include<stdio.h>
int main()
{
    int i,a,b,n, max = 0, c=0;
    scanf("%d",&n);

    for(i = 0; i< n; i++)
    {
        scanf("%d %d",&a, &b);
        c=b-a+c;
        if(max < c)
        {
            max = c;
        }

    }
    printf("%d\n",max);

    return 0;
}
