#include<stdio.h>
#include<string.h>
int main()
{
    int i,j, l;
    char s1[1000], s2[1000], s3[1000];

    scanf("%s %s",&s1,&s2);

    l = strlen(s1);

    for(i = 0,j = l-1;i < l, j >=0;i++,j--)
    {
        s3[i] = s2[j];
    }
    s3[i] = '\0';

    int d = strcmp(s3,s1);

    if(d == 0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;
}
