#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,k,t,r1,r2;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c>>d>>k;

        r1 = a/c;
        r2 = b/d;
        if(a%c!=0)
            r1++;
        if(b%d!=0)
            r2++;

            if(r1+r2<=k)
                cout<<r1<<" "<<r2<<endl;
            else
                cout<<"-1\n";

    }
    return 0;
}
