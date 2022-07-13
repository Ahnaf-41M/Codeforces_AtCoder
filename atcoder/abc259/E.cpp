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

vector<PII> v[2 * MX];
map<int, int> mxPow, cnt;

void Solve(int tc)
{
    int n;
    cin >> n;

    rep(i, 1, n) {
        int m; cin >> m;
        while (m--) {
            int p, e; cin >> p >> e;
            if (e > mxPow[p]) {
                mxPow[p] = e;
                cnt[p] = 1;
            }
            else if (e == mxPow[p])
                cnt[p]++;
            v[i].pb({p, e});
        }
    }

    int ans = 0, flg = 0;
    rep(i, 1, n) {
        int ok = 0;
        for (auto it : v[i]) {
            int curPow = it.ss;
            if (curPow == mxPow[it.ff] && cnt[it.ff] == 1)
                ok = 1;
        }
        ans += ok;
        if (!ok) flg = 1;
    }
    cout << ans + flg << "\n";
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