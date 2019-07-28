#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c1 = 0,c2 = 0,c = 0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);

    for(i = 0; i < n; i++)
    {
        if(s[i] == '1')
            c1++;
        else
            c2++;
    }
    c = abs(c1-c2);
    printf("%d\n",c);
    return 0;
}
