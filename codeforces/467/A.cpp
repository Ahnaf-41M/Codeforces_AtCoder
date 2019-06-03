#include<stdio.h>
int main()

{
    int n, i, p, q,sum = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d %d",&p, &q);

        if(q - p >= 2)
        {
            sum = sum + 1;
        }
    }
    printf("%d\n",sum);

    return 0;
}
