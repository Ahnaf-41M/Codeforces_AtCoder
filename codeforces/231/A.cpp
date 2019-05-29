#include<stdio.h>
int main()
{
    int i,t,n1,n2,n3, count = 0;

    scanf("%d",&t);

    for(i = 0; i< t; i++)
    {
        scanf("%d %d %d",&n1,&n2,&n3);

        if((n1==1 && n2==1) || (n2==1 && n3==1) || (n3==1 && n1==1))
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
