#include<stdio.h>
#include<string.h>
int main()
{
    int i,a[27],l1 = 0, count = 0;
    char s[101];

    scanf("%s",&s);

    for(i = 0; i < 26; i++)
    {
        a[i] = 0;
    }

    for(i = 0; i < strlen(s); i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            l1 = s[i] - 97;
        }
        else
        {
            l1 = s[i] - 65;
        }
        a[l1] = a[l1] + 1;

        if(a[l1] == 1)
        {
            count++;
        }
        else
        {
            count = count;
        }
    }

    if(count%2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
