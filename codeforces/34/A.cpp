#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,i,mn=INT_MAX,id1,id2,j;

     cin>>n;
     int a[n];

     for(i = 0; i < n; i++)cin>>a[i];

     for(i = 0; i < n; i++)
     {
          for(j = 0; j < n; j++)
          {
               if(i!=j)
               {
                    if(abs(a[i]-a[j])<mn && ((i==0 && j==n-1)||abs(i-j)==1))
                    {
                         mn = abs(a[i]-a[j]);
                         id1 = i+1;
                         id2 = j+1;
                    }
               }
          }
     }
     cout<<id1<<" "<<id2<<endl;
}
