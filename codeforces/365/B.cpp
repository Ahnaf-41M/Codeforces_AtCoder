#include <bits/stdc++.h>
#include <ext/rope>

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(min(a, b), min(c, d))
#define max4(a, b, c, d) max(max(a, b), max(c, d))

#define count_one(a) __builtin_popcount(a) // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i) __builtin_parity(i)      //even parity 0 and odd parity 1
#define blz(a) __builtin_clz(a)            //Returns the number of leading zeroes in a number(a)
#define btz(a) __builtin_ctz(a)            //Returns the number of trailing zeroes in a number(a)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))

#define pb push_back
#define PI M_PI
#define endl "\n"
#define sc scanf
#define pf printf

#define ll long long
#define ull unsigned long long

#define W(t) while (t--)
#define rep1(i, n) for (int i = 0; i < n; i++)
#define rep2(a, b) for (int i = a; i <= b; i++)
#define repit(it, type) for (it = type.begin(); it != type.end(); it++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
using namespace __gnu_cxx;

int main()
{
    IOS
    ll n,i, cnt = 0, add = 0, ans = -1;

    cin >> n;
    ll a[n + 1];

    rep2(1, n)
    {
        cin >> a[i];
    }
    if (n == 1)
        cout << 1 << endl;
    else if (n == 2)
        cout << 2 << endl;
    else
    {
        rep2(3, n)
        {
            add = a[i - 1] + a[i - 2];

            if (add == a[i])
            {
                cnt++;
            }
            else
            {
                ans = max(cnt, ans);
                cnt = 0;
            }
        }
        ans = max(ans,cnt);
        cout << ans+2 << endl;
    }
}