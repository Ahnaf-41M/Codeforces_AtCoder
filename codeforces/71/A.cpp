#include<stdio.h>
int main()
{
    int l,i,n;
    char s[100];


    scanf("%d",&n);



    for(i=1;i<=n;i++){
     scanf("%s",&s);
    l=strlen(s);

    if(l>10)
    {
        printf("%c%d%c\n",s[0],l-2,s[l-1]);
    }
    else{
        printf("%s\n",s);
    }

    }
    return 0;

}
