#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,c1=0,c2=0,i;
    cin>>a>>b>>c;
    for(i=0;; i++)
    {
        c1=__gcd(a,c);
        if(c1>c)
        {
            c1=-1;
            break;
        }
        c-=c1;
        c2 =__gcd(b,c);
        if(c2>c)
        {
            c2=-1;
            break;
        }
        c-=c2;

    }
    if(c2==-1)
        cout<<0<<endl;
    else
        cout<<1<<endl;
}
