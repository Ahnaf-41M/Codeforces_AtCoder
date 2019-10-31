#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 10000005
ll v[Max];



void seive()
{
    ll i,j;
    ll root = sqrt(Max);
    v[1]=1;

    for(i = 2;i <= Max; i++)
    {
        v[i] = 1;
    }
    for(i = 2;i <= root; i++)
    {
        if(v[i]==1)
        {
            for(j = 2; i*j <= Max;j++)
            {
                v[i*j] = 0;
            }
        }
    }
}

int main()
{
    ll n;
    cin>>n;
    seive();


    ll x,root;

    while(n--)
    {
        cin>>x;
        root = sqrt(x);
        if(x==1||x==0)
            cout<<"NO\n";
        else if(root*root==x)
        {
            if(v[root]== 1)
            {
                cout<<"YES\n";
            }
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }

    return 0;
}
