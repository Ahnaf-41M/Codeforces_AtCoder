#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,m,i,sum=0,cnt=0;

     cin>>n>>m;
     int a[n];
     for(i = 0; i < n; i++)cin>>a[i];
     sort(a,a+n);

     for(i = 0; i < n; i++)
     {
          if(cnt==m)
               break;
          if(a[i]<0)
          {
               sum+=a[i];
               cnt++;
          }
          if(a[i]>0)
               break;
     }
     cout<<abs(sum)<<endl;
}
