#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll a[n],sum=0;


    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        cout<<sum+a[i]<<" ";
        if(a[i]>0)sum+=a[i];
    }

}
