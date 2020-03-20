#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll fun(ll n,ll a[],ll a1[])
{
     ll i,j;
     for(i = 0; i < 4; i++)
     {
          for(j = 1; a[i]*j <= n; j++)
          {
               a1[a[i]*j]=0;
          }
     }
     ll c=0;
     for(i = 1; i <= n; i++)
     {
          if(a1[i]==0)
               c++;
     }
     return c;
}
int main()
{
     ll i,n;
     ll a[4];

     for(i = 0;i < 4; i++)cin>>a[i];
     cin>>n;
     ll a1[n+1];
     for(i = 1; i <= n; i++)a1[i]=i;
     cout<<fun(n,a,a1)<<endl;
}
