#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cr=0,p=0;

    cin>>n;
    int a[n];

    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for(i = 0;i < n; i++)
    {
        if(a[i]<0)
            cr+=a[i];
        else
            p+=a[i];

        if(p>0 && a[i]<0)
        {
            p+=a[i];
            cr-=a[i];
        }
    }
    cout<<abs(cr)<<endl;

    return 0;
}

