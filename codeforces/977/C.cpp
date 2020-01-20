#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,c=0,i,res;

    cin>>n>>k;
    int a[n+2];

    for(i = 0; i < n; i++)
        cin>>a[i];

    sort(a,a+n);
    if(k!=0)
        res = a[k-1];
    else
        res = a[k]-1;

    for(i = 0; i < n; i++)
    {
        if(res>=a[i])
            c++;
    }
    if(c!=k|| !(1<=res))
    {
        cout<<"-1\n";
    }
    else
        cout<<res<<endl;
}
