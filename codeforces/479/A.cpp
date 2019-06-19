#include<stdio.h>
int main()
{
    int a , b, c, x[5], i;

    scanf("%d %d %d",&a, &b, &c);

    x[0] = a + (b * c);
    x[1] = a * (b + c);
    x[2] = a * b * c;
    x[3] = (a + b) * c;
    x[4] = a + b + c;

    int max = x[0];

    for(i = 0; i < 5; i++)
    {
        if(max < x[i])
        {
            max = x[i];
        }
    }
    printf("%d\n",max);

    return 0;
}
