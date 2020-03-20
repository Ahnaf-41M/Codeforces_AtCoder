#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define Max 1000005

int main()
{
    ll i,j,n,t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<-1<<endl;
        else
        {
            cout<<2;
            for(i = 1; i <= n-1; i++)
                cout<<3;

            cout<<endl;
        }

    }

}
