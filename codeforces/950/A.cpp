#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a;

    cin>>l>>r>>a;

    if((l==0 && a==0) || (r==0 && a==0))
    {
        cout<<"0\n";
    }
    else if(l==r && r==a && a==l)
    {
        if((l+r+a)%2 == 0)
        {
            cout<<l+r+a<<endl;
        }
        else
        {
            cout<<l+a+r-1<<endl;
        }
    }
    else if(r+a<=l)
        {
            cout<<(l+r+a)-(l-(r+a))<<endl;
        }
        else if(l+a<=r)
        {
            cout<<(l+r+a)-(r-(l+a))<<endl;
        }
    else if(l+a < r+a)
    {
        if((l+a-r)%2==0)
        {
            cout<<l+a+r;
        }
        else
            cout<<l+a+r-1<<endl;
    }
    else if(r+a < l+a)
    {
        if((r+a-l)%2==0)
        {
            cout<<l+a+r<<endl;
        }
        else
            cout<<l+a+r-1<<endl;
    }
    else if(r==l)
    {
        if(a%2==0)
        cout<<l+r+a<<endl;
        else
            cout<<l+r+a-(a%2)<<endl;
    }
    else
        return 0;


    return 0;
}
