#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll b[500000];
ll compute(ll n)
{
     return (n*(n-1))/2;
}
int main()
{
     ll i,j,n,sum=0;
     cin>>n;

     ll a[n];

     for(i = 0; i < n; i++)
     {
          cin>>a[i];
          b[a[i]]++;

     }
     for(i = 0; i < n+1; i++)
     {
          sum+=compute(b[i]);
     }
     for(i = 0; i < n; i++)
     {
          //cout<<b[a[i]]<<endl;
          cout<<sum-b[a[i]]+1<<endl;
     }

}
