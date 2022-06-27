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
    int n;
    string s;

    cin >> n >> s;

    vector<int> pref0(n), suf1(n);
    vector<pair<int, char>> v(n);

    rep(i, 0, n - 1) {
        cin >> v[i].ff;
        if (s[i] == '1') v[i].ss = '1';
        else v[i].ss = '2';
    }
    sort(all(v));

    rep(i, 0, n - 1) {
        if (v[i].ss == '1') suf1[i]++;
        else pref0[i]++;
    }
    irep(i, n - 2, 0) suf1[i] += suf1[i + 1]; //for 1's
    rep(i, 1, n - 1) pref0[i] += pref0[i - 1]; //for 0's

    int ans = 0;
    rep(i, 0, n - 1) ans = max(ans, pref0[i] + suf1[i]);
    cout << ans << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    //cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}