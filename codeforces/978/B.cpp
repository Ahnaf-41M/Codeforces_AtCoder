#include<stdio.h>
int main()
{
    int n, i, count = 0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",&a);

    for(i = 0; i < n; i++)
    {

        if(a[i] == 'x' && a[i+1] == 'x' && a[i+2] == 'x')
        {
            count++;

        }
        else
        {
            count = count;
        }
    }
    printf("%d\n",count);
    return 0;

}
