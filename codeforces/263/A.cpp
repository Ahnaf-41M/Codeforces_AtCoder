#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,x,y,a[6][6],r;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(a[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    r = abs(2-x) + abs(2-y);

    printf("%d\n",r);

    return 0;

}
