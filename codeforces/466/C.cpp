#include<bits/stdc++.h>

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define count_one(a) __builtin_popcount(a)  // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i)   __builtin_parity(i)  //even parity 0 and odd parity 1
#define blz(a)   __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define btz(a)   __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
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
int a[1000010];
long long cnt[1000010];
int main()
{
    IOS
    int n;
    cin >> n;
    long long s = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];
        s += a[i];
    }
    if (s % 3 != 0)
        cout << "0\n";
    else
    {
        s /= 3;
        //cout<<s<<endl;
        long long ss = 0;
        for(int i = n-1; i >= 0 ; i--)
        {
            ss += a[i];
            if (ss == s)
                cnt[i] = 1;
        }
        for(int i = n-2 ; i >= 0 ; i--)
        {
            //cout<<cnt[i]<<" ";
            cnt[i] += cnt[i+1];
            //cout<<cnt[i+1]<<endl;
        }

        long long ans = 0;
        ss = 0;
        for(int i = 0 ; i+2 < n ; ++i)
        {
            ss += a[i];
            if (ss == s)
                ans += cnt[i+2];
        }
        cout << ans << "\n";
    }
    return 0;
}
