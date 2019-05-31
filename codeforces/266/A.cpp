#include<stdio.h>
int main()
{
    int n, i, count = 0, sum=0;
    char s[52];

    scanf("%d",&n);
    getchar();

    gets(s);

    for(i = 0; i < n; i++)
    {
        if(s[i] == s[i+1])
        {
           sum = sum + 1;
        }
        else
            count = 0;
    }
    printf("%d\n",sum);
    return 0;
}
