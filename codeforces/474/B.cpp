#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n;
    int a[n],b[n];
    memset(b,0,sizeof(b));
    int i;
    for(i = 0; i < n; i++)
    {
        cin>>a[i];
        if(i==0)
            b[i]=a[i];
        else
            b[i]=b[i-1]+a[i];
    }
    cin>>q;
    int c[q],d[q];
    for(i = 0; i < q; i++)
    {
        cin>>c[i];
        if(binary_search(b,b+n,c[i]))
        {
            d[i]=upper_bound(b,b+n,c[i])-b;
        }
        else
         {
              d[i] = upper_bound(b,b+n,c[i])-b;
              d[i]++;
         }
    }
    for(i = 0; i < q; i++)
    {

        cout<<d[i]<<endl;
    }
}
