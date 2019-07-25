#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s1[101],s2[101],s3[101];

    scanf("%s %s",&s1,&s2);

    for(i = 0,j=0; i<strlen(s1),j<strlen(s2);i++,j++)
    {
        if(s1[i]=='0' && s2[j] == '1' || s1[i]=='1' && s2[j]=='0')
        {
            s3[i] = '1';
        }
        else
            s3[i] = '0';
    }
    s3[i]='\0';

    printf("%s\n",s3);

    return 0;
}
