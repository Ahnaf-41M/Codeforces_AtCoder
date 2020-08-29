#include<bits/stdc++.h>

#define pb   push_back
#define endl "\n"
#define ll   long long

#define W(t)            while(t--)
#define clr(a)          memset(a,0,sizeof(a))
#define rep(i,a,b)      for(i = a; i < b; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
    IOS

    ll a,b,c;
    cin>>a>>b>>c;
    double ans = (1.0*a)/(1.0*c);
    ll d = b*1.0;

    if(ans<=d)
     cout<<"Yes\n";
    else
     cout<<"No\n";

     return 0;
}