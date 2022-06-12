#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

void Solve(int tc)
{
    int n, odd = 0, even = 0, mn_pow = 100;
    cin >> n;

    rep(i, 1, n) {
        int x; cin >> x;
        if (x & 1) odd++;
        else {
            int cnt = 0;
            even++;
            while (x % 2 == 0)
                x /= 2, cnt++;
            mn_pow = min(mn_pow, cnt);
        }
    }

    if (odd) cout << even << "\n";
    else cout << even - 1 + mn_pow << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}