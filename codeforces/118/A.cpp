#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;

    scanf(" %[^\n]",s);

    for(i = 0; i < strlen(s); i++)
    {


        if(s[i] == 'a' || s[i] =='e' || s[i] == 'i' || s[i] =='o' || s[i] =='u'|| s[i] == 'y'||
           s[i] == 'A' || s[i] =='E' || s[i] == 'I' || s[i] =='O' || s[i] =='U' || s[i] == 'Y')
        {
            printf("");
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            printf(".%c",32+s[i]);
        }
        else
        {
            printf(".%c",s[i]);
        }
    }
    printf("\n");

    return 0;
}
