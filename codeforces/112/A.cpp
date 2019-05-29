#include<stdio.h>
#include<string.h>
int main()
{
    int d,i,k;
    char s1[100],s2[100];
    scanf("%s %s",&s1,&s2);

    for(i = 0,k = 0;i < strlen(s1); i++)
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z' && s2[i] >= 'a' && s2[k] <= 'z')
        {
            s1[i] = s1[i] + 32;
            s2[i] = s2[i];

        }
        else if(s1[i] >= 'a' && s1[i] <= 'z' && s2[i] >= 'A' && s2[i] <= 'Z')
        {
            s2[i] = s2[i] + 32;
            s1[i] = s1[i];
        }
        else
        {
            s1[i] = s1[i];
            s2[i] = s2[i];
        }
    }
    d = strcmp(s1,s2);
    if(d == 0)
    {
        printf("0\n");
    }
    else if(d > 0)
    {
        printf("1\n");
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
