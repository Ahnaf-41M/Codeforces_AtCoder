#include<stdio.h>
int main()
{
    int n, i, a[100], s1 = 0;

    scanf("%d",&n);

    for(i = 0; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] == 1)
            s1 = s1 + 1;
    }
    if(s1 != 0)
        printf("HARD\n");
    else
        printf("EASY\n");

    return 0;
}
