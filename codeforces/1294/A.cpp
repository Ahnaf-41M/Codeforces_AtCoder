#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,a,b,c,n,res=0,mx=0;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c>>n;
        mx = max(max(a,b),max(b,c));
        if((mx-a)+(mx-b)+(mx-c)>n)
            cout<<"NO\n";
        else if((mx-a)+(mx-b)+(mx-c)==n)
            cout<<"YES\n";
        else
        {
            if((mx-a)+(mx-b)+(mx-c)<n)
            {
                if((n-(mx-a)-(mx-b)-(mx-c))%3==0)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        }
    }
}
