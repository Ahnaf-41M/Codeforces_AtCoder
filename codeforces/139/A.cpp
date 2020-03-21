#include<bits/stdc++.h>
using namespace std;

int main()
{
     int pages,i,sum=0,ind;
     cin>>pages;
     int a[7];
     for(i = 0; i < 7; i++)cin>>a[i];

     while(pages!=sum)
     {
          for(i = 0; i < 7; i++)
          {
               if(sum>=pages)
                    break;
               else
               {
                    ind = i+1;
                    sum+=a[i];
               }
          }
          if(sum>=pages)
                    break;
     }
     cout<<ind<<endl;
}
