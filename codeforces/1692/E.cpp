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
    int n, x, tot = 0;

    int cur = 0, ans = 0;
    map<int, int> mp;

    cin >> n >> x;

    int ar[n];
    rep(i, 0, n - 1) cin >> ar[i], tot += ar[i];

    if (tot < x) {
        cout << "-1\n";
        return;
    }
    rep(i, 0, n - 1) {

        cur += ar[i];

        if (cur == x)
            ans = i + 1;

        if (mp.find(cur) == mp.end())
            mp[cur] = i;

        if (mp.find(cur - x) != mp.end())
            if (ans < (i - mp[cur - x]))
                ans = i - mp[cur - x];
    }

    cout << n - ans << "\n";
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