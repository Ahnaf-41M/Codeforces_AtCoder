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
    int n, b, k, s;
    cin >> n >> k >> b >> s;

    if (s >= b * k) {
        int cur = b * k;
        s -= b * k;
        cur += min(k - 1, s);
        s -= min(k - 1, s);
        int can = (k - 1) * (n - 1);
        if (can < s) {
            cout << "-1\n";
            return;
        }
        cout << cur << " ";
        rep(i, 2, n) {
            int x = min(k - 1, s);
            s -= x;
            cout << x << " ";
        }
        cout << "\n";
    }
    else cout << "-1\n";
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