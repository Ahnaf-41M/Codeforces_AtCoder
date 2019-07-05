#include<stdio.h>
int main()
{
    int n,i,j,num[100], x;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i = 1; i < n; i++)
    {
        x = num[i];
        j = i - 1;
        while(j >= 0 && num[j] > x)
        {
            num[j + 1] = num[j];
            j--;
        }
        num[j+1] = x;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;

}
