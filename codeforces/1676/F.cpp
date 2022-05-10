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
    int n, k;
    map<int, int> mp;
    vector<int> v;

    cin >> n >> k;
    rep(i, 1, n) {
        int x; cin >> x;
        mp[x]++;
    }
    for (auto it : mp) if (it.ss >= k) v.pb(it.ff);
    sort(all(v));
    if (v.empty()) cout << "-1\n";
    else {
        int l = v[0], r = v[0], mx = 0;
        vector<PII> ans;

        rep(i, 1, v.size() - 1) {
            if (v[i] - v[i - 1] == 1) r = v[i];
            else {
                mx = max(mx, r - l);
                ans.pb({l, r});
                l = v[i], r = v[i];
            }
        }
        ans.pb({l, r});
        mx = max(mx, r - l);
        for (auto it : ans) {
            if (it.ss - it.ff == mx) {
                cout << it.ff << " " << it.ss << "\n";
                break;
            }
        }
    }

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