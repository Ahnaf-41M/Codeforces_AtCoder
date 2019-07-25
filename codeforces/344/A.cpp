#include<stdio.h>
int main()
{
    int n,i,count = 0;

    scanf("%d",&n);
    char s[n];

    for(i = 0;i < n; i++)
    {
        scanf("%s",&s[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
