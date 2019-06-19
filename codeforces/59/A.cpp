#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i, s1 = 0, s2 = 0;

    scanf("%s",&s);

    for(i = 0; i < strlen(s); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s1 = s1 + 1;
        }
        else
        {
            s2 = s2 + 1;
        }
    }
    if(s1 >= s2)
    {
        for(i = 0; i < strlen(s); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z' )
            {
                s[i] = s[i] + 32;
            }
        }
    }
    else
    {
        for(i = 0 ; i < strlen(s); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
        }
    }

    printf("%s\n",s);

    return 0;
}
