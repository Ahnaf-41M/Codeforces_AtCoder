#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    ll x,y;

    cin>>t;

    while(t--)
    {
        cin>>x>>y;
        if(abs(x-y)!=1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
