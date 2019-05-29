#include<stdio.h>
int main()
{
    int i,count = 0, count1 = 0;
    char s[100];

    scanf("%s",s);

    for(i = 0; i < strlen(s); i++)
    {
        if(s[i] == '0')
        {
            count++;
        }
        else if(count >= 7)
        {
            break;
        }
        else
            count = 0;
    }
    for(i = 0;i < strlen(s); i++)
    {
        if(s[i] == '1')
        {
            count1++;
        }
        else if(count1 >= 7)
        {
            break;
        }
        else
        {
            count1 = 0;
        }
    }
    if((count1 >= 7 && count1 > count) || (count >= 7 && count > count1) )
    {
        printf("YES\n");

    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
