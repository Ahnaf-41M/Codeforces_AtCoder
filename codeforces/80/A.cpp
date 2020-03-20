#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define Max 70
ll a[Max];

void seive()
{
    ll i,j;
    a[0]=0,a[1]=0,a[2]=1;

    for(i = 3; i <= Max; i+=2)
        a[i]=1;
    for(i = 3; i < sqrt(Max); i++)
    {
        if(a[i]==1)
        {
            for(j = 2; j*i <= Max; j++)
            {
                a[i*j]=0;
            }
        }
    }
}

int main()
{
    ll i,j,n,m;
    seive();
    cin>>n>>m;

    for(i = n+1; ; i++)
    {
         if(a[i]==1 && i==m)
         {
              cout<<"YES\n";
              return 0;
         }
         else if(a[i]==1 && i!=m)
         {
              cout<<"NO\n";
              return 0;
         }
    }


    return 0;
}

