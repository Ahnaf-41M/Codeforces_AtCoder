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
    int n, ans = 0;
    map<int, int> mp;
    cin >> n;
    vector<int> v;

    rep(i, 1, n) {
        int x; cin >> x;
        mp[x]++;
    }
    for (auto it : mp) v.pb(it.ff);

    n = v.size();
    rep(i, 0, n - 1) {
        rep(j, i + 1, n - 1) {
            while (mp[v[i]] > 1 && mp[v[j]] > 1)
                mp[v[i]]--, mp[v[j]]--;
        }
    }
    for (auto it : mp) {
        if (it.ss & 1)
            ans++;
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