#include<bits/stdc++.h>

#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep1(i,n)       for(int i = 0; i < n; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
    IOS
    ll t,n,i;
    string s;
    cin>>n;

    if(n>= 400 && n<= 599)
        cout<<8;
    else if(n>= 600 && n<= 799)
        cout<<7;
    else if(n>= 800 && n<= 999)
        cout<<6;
    else if(n>= 1000 && n<= 1199)
        cout<<5;
    else if(n>= 1200 && n<= 1399)
        cout<<4;
    else if(n>= 1400 && n<= 1599)
        cout<<3;
    else if(n>= 1600 && n<= 1799)
        cout<<2;
     else
          cout<<1;


    return 0;
}
