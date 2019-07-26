#include<stdio.h>
int main()
{
    int n,a[27], count = 0,i;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);

    for(i = 0; i < 27; i++)
    {
        a[i] = 0;
    }
    for(i = 0; i < n; i++)
    {
        if(s[i] >= 'a' && s[i]<='z')
        {
            a[s[i] - 'a'] = a[s[i]-'a'] + 1;

        }
        else
        {
            a[s[i]-'A']+=1;
        }
    }
    for(i = 0; i < 26; i++)
    {
        if(a[i]>=1)
        {
            count++;
        }
    }
    if(count==26)
    {
        printf("YES\n");

    }
    else
        printf("NO\n");

    return 0;
}
