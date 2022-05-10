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
    int n, m;
    vector<string> v;
    string s1, s2;

    cin >> n >> m;

    int ans = 1e10;

    rep(i, 1, n) {
        string s; cin >> s;
        v.pb(s);
    }
    rep(i, 0, n - 1) {
        rep(j, i + 1, n - 1) {
            int tmp = 0;
            s1 = v[i], s2 = v[j];
            rep(k, 0, m - 1) tmp += abs(s1[k] - 'a' - (s2[k] - 'a'));
            ans = min(tmp, ans);
        }
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