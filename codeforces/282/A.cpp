#include<stdio.h>
int main()
{
    int x = 0,t,i, j;
    char ch[4];
    scanf("%d",&t);

    for(i = 0; i < t; i++)
    {
        getchar();
        gets(ch);

    for(j = 0;j < 1; j++)
    {

        if(ch[j] == '+')
        {
           ++x;
        }
        else if(ch[j] == '-')
        {
            --x;
        }
        else if(ch[j] == 'X' && ch[j+1] == '+')
        {
            x++;
        }
        else if(ch[j] == 'X' && ch[j+1] == '-')
        {
            x--;
        }
    }
    }
    printf("%d\n",x);
    return 0;


}
