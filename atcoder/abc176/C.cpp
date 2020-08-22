#include<bits/stdc++.h>

#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep(i,n)        for(int i = 0; i < n; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
    IOS
    ll n,i,sum=0;

    cin>>n;
    ll a[n];
    rep(i,n) cin>>a[i];
    for(i = 1; i < n; i++)
    {
        if(a[i] < a[i-1])
        {

            sum += (a[i-1]-a[i]);
            a[i] = a[i-1];
           // cout<<a[i]<<" ";
        }
    }
    cout<<sum;

    return 0;
}
