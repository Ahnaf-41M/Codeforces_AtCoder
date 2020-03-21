#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,m,mx=INT_MIN,ind;
    double f;
    cin>>n>>m;
    int a[n];

    for(i = 0; i < n; i++)
        cin>>a[i];

    for(i = 0; i < n; i++)
    {
        f =1.0* ceil((1.0*a[i])/(m*1.0));
        //cout<<f<<endl;
        if(mx*1.0<=f)
        {
            mx = f;
            ind = i+1;
            //cout<<ceil(1.0*a[i])/m*1.0<<endl;
        }
    }
    cout<<ind<<endl;
}
