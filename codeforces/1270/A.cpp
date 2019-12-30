#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m1,m2,k1,k2;

    cin>>t;

    while(t--)
    {
        cin>>n>>k1>>k2;
        m1=0,m2=0;
        int a1[k1],a2[k2];

        for(int i = 0; i < k1; i++)
        {
            cin>>a1[i];
        }
        for(int i = 0; i < k2; i++)
            cin>>a2[i];

        m1 = *max_element(a1,a1+k1);
        m2 = *max_element(a2,a2+k2);
        if(m1>m2)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}
