#include<stdio.h>
#include<string.h>

int main()
{
    int i, sum= 0;
    char s[100];

    scanf(" %s",&s);

    for(i = 0; i < strlen(s); i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' ||  s[i] == '9')
        {
            sum = 1;
        }
    }
    if(sum == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
