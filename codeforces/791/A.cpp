#include<stdio.h>
int main()
{
    int a,b,i,j, count = 0;

    scanf("%d %d",&a,&b);

    for(i=3,j=2; ;j*=2, i*=3)
    {
        count++;
        if(a * i > b *j)
            break;
    }
    printf("%d\n",count);

    return 0;
}
