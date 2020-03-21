#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
     ll i,n,m,pat=0,vas=0,j,tk=0,v,x;
     cin>>n;

     ll a[n];
     for(i = 0; i < n; i++)
     {
          cin>>x;
          a[x] = i+1;
     }
     cin>>m;
     ll b[m];
     for(i = 0; i < m; i++)
     {
          cin>>b[i];
          vas+=(a[b[i]]);
          pat+=n-(a[b[i]])+1;
     }


     cout<<vas<< " "<<pat<<endl;
}
