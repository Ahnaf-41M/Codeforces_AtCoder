#include<stdio.h>
int main()
{
    long long int a[6];
    int i, count= 0,j;

    for(i = 0; i < 4; i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i = 0;i<4;i++)
    {
        for(j = i+1; j < 4; j++)
        {
            if(a[i] == a[j] && a[i] >0)
            {
                count++;
                a[i] = 0;

            }
            if(count==3)
                break;
        }
        if(count == 3)
            break;
    }

    printf("%d\n",count);

  return 0;
}
