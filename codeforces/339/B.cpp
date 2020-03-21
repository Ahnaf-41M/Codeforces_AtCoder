#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
     ll n,m,i;
     cin>>n>>m;

     ll a[m],sum=0;

     for(i = 0; i < m; i++)cin>>a[i];
     for(i = 0; i < m; i++)
     {
          if(i==0)
          {
               sum+=a[i]-1;
          }
          else if(a[i]>=a[i-1])
          {
               sum+=a[i]-a[i-1];
          }
          else
          {
               sum+=n-a[i-1]+a[i];
          }
     }
     cout<<sum<<endl;
}
