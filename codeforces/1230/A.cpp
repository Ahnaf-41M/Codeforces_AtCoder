#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;

    cin>>a>>b>>c>>d;

    if((a+b)==(c+d)||(a+c)==(b+d)||(a+d)==(b+c)||(a+b+c)==d||a==(b+c+d)||b==(a+c+d)||c==(a+b+d))
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
