#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a[3],i,r1,r2;

    for(i = 0;i < 3; i++)
    {
       cin>>a[i];
    }
    sort(a,a+3);
    r1 = a[0]+a[1];
    r2 = (a[0]+a[1]+a[2])/3;
    ll res = min(r1,r2);

    cout<<res<<endl;
    return 0;
}
