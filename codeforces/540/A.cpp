#include<stdio.h>
#include<math.h>
int main()
{
    char s1[1000],s2[1000];
    int n,count = 0,c=0,i;
    scanf("%d",&n);

    scanf("%s %s",&s1,&s2);
    for(i = 0; i < n; i++)
    {
        c = abs((s1[i]-0) - s2[i]-0);
        if(c > 5)
            count+=10-c;
        else
            count+=c;
    }
    printf("%d\n",count);
    return 0;

}
