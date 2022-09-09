#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           200005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int cnt[MX], ar[MX];
int n, m;

bool cmp(int x, int y)
{
    return cnt[x] > cnt[y];
}
void Solve(int tc)
{
    cin >> n >> m;
    vector<int> v(n + 1), indx;
    vector<PII> queries;

    rep(i, 1, n) {
        cin >> v[i];
        indx.pb(i);
    }

    while (m--) {
        int l, r; cin >> l >> r;
        cnt[l]++, cnt[r + 1]--;
        queries.pb({l, r});
    }
    rep(i, 1, n) cnt[i] += cnt[i - 1];

    sort(all(v));
    sort(all(indx), cmp);

    for (int i : indx) {
        ar[i] = v.back();
        v.pop_back();
    }

    int ans = 0;
    rep(i, 1, n) ar[i] += ar[i - 1];
    for (auto it : queries)
        ans += ar[it.ss] - ar[it.ff - 1];
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