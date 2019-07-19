#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   int count1 = 0, count2 = 0, ind1,ind2,n,i;
   scanf("%d",&n);
   int a[n];

   for(i = 0; i < n; i++)
   {
       scanf("%d",&a[i]);
   }
   for(i = 0; i < n; i++)
   {
       if(a[i] % 2 == 0)
       {
           count1++;
           ind1 = i + 1;
       }
       else
       {
           count2++;
           ind2 = i + 1;
       }
   }
   if(count1 > count2)
    printf("%d\n",ind2);
   else
    printf("%d\n",ind1);

   return 0;
}
