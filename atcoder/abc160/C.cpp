#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,i,mn=0;

    cin>>k>>n;
    int a[n];

    for(i = 0; i < n; i++)
    cin>>a[i];

    for(i = 0; i < n; i++)
    {
        if(i!=n-1)
        mn = max(mn,abs(a[i+1]-a[i]));
        else
        mn = max(mn,k-a[n-1]+a[0]);
    }
    cout<<k-mn<<endl;
}