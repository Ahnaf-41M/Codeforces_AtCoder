#include<stdio.h>
int main()
{
    long long int sa = 0, sb = 0, i,n;
    char s[100000];

    scanf("%lld",&n);
    scanf("%s",&s);

    for(i = 0; i < strlen(s); i++)
    {
        if(s[i] == 'A')
        {
            sa = sa + 1;
        }
        else
        {
            sb = sb + 1;
        }
    }
    if(sa > sb)
    {
        printf("Anton\n");
    }
    else if(sb > sa)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }

    return 0;
}
