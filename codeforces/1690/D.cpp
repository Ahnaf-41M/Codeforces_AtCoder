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
    int n, k, ans = 2e5;
    string s;

    cin >> n >> k >> s;

    vector<int> pref(n + 1);
    s = '#' + s;
    rep(i, 1, n) {
        pref[i] = pref[i - 1];
        pref[i] += (s[i] == 'B');
    }

    rep(i, 1, n) {
        int r = i + k - 1;
        if (r > n) break;
        ans = min(ans, k - (pref[r] - pref[i - 1]));
    }
    cout << ans << "\n";
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