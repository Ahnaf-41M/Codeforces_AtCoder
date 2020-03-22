#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll k2,k3,k5,k6,x,y,z,ans;

     cin>>k2>>k3>>k5>>k6;

     x = min(min(k2,k5),min(k5,k6));
     y = x*256;
     k2-=x,k5-=x,k6-=x;
     z = min(k2,k3);
     z = z*32;
     ans = y+z;

     cout<<ans<<endl;
}
