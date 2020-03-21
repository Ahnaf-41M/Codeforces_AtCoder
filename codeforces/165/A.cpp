#include<bits/stdc++.h>
using namespace std;

int main()
{
     int i,j,n,c1=0,c2=0,c3,c4,c=0;
     cin>>n;
     int x[n],y[n];

     for(i = 0; i < n; i++)
     {
          cin>>x[i]>>y[i];
     }
     for(i = 0; i < n; i++)
     {
          c1=0,c2=0,c3=0,c4=0;
          for(j = 0; j < n; j++)
          {
               if(i!=j)
               {
                    if(x[j]>x[i]&&y[i]==y[j]&&c1==0)
                         c1=1;
                    if(x[j]<x[i]&&y[i]==y[j]&&c2==0)
                         c2=1;
                    if(x[i]==x[j]&&y[i]>y[j]&&c3==0)
                              c3=1;
                    if(x[i]==x[j]&&y[i]<y[j]&&c4==0)
                              c4=1;
                    if(c1==1&&c2==1&&c3==1&&c4==1)
                         break;
               }
          }
          if(c1==1&&c2==1&&c3==1&&c4==1)
               c++;
     }
     cout<<c<<endl;
}
