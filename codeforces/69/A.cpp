#include<stdio.h>
int main()
{
    int n,i,j,s1 = 0, s2 = 0, s3 = 0;
    int a1[100], a2[100], a3[100];

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d %d %d",&a1[i], &a2[i],&a3[i]);
    }
    for(i = 0; i < n; i++)
    {
        s1 = s1 + a1[i];
        s2 = s2 + a2[i];
        s3 = s3 + a3[i];
    }
    if(s1 == 0 && s2 == 0 && s3 == 0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;

}
