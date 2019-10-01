#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,n,i,x,sum,d;

    cin>>n;

    while(n--)
    {
        cin>>q;
        sum=0;

        for(i = 0; i < q; i++)
        {
            cin>>x;

            sum+=x;
        }
        d = sum/q;
        if(d*q>=sum)
            cout<<d<<endl;
        else
            cout<<d+1<<endl;
    }
    return 0;
}
