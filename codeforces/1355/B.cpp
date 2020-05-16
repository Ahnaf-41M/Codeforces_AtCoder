#include<bits/stdc++.h>

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define count_one(a) __builtin_popcount(a)  // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)

#define pb push_back
#define PI M_PI
#define endl "\n"
#define sc scanf
#define pf printf
#define ll long long
#define ull unsigned long long
#define rep1(n)   for(int i = 0; i < n; i++)
#define rep2(a,b) for(int i = a;i <= b; i++)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    IOS
    ll m,n;
    cin>>m;

    while(m--)
    {
        cin>>n;
        ll b[n];
        ll cnt=0,ans=0;

        rep1(n)
        cin>>b[i];
        sort(b,b+n);
        rep1(n)
        {
            if(b[i] <= cnt)
            {
                ans++;
                cnt=0;
            }
            else
            {
                cnt++;
                if(b[i]<=cnt)
                {
                    cnt=0;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}
