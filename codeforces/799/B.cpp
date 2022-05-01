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

int p[2 * MX], a[2 * MX], b[2 * MX];

void Solve(int tc)
{
    int n, m;
    map<int, PII> mp;
    set<PII> Front, Back;

    cin >> n;
    rep(i, 1, n) cin >> p[i];
    rep(i, 1, n) cin >> a[i];
    rep(i, 1, n) {
        cin >> b[i];
        mp[p[i]] = {a[i], b[i]};
        Front.insert({a[i], p[i]});
        Back.insert({b[i], p[i]});
    }

    cin >> m;
    while (m--) {
        int x; cin >> x;
        auto it1 = Front.lower_bound({x, 0});
        auto it2 = Back.lower_bound({x, 0});

        if (it1 != Front.end() && it2 != Back.end() && it1->ff == x && it2->ff == x) {
            int mn = min(it1->ss, it2->ss);
            Front.erase({mp[mn].ff, mn});
            Back.erase({mp[mn].ss, mn});
            cout << mn << " ";
        }
        else if (it1 != Front.end() && it1->ff == x) {
            cout << it1->ss << "\n";
            Front.erase({mp[it1->ss].ff, it1->ss});
            Back.erase({mp[it1->ss].ss, it1->ss});
        }
        else if (it2 != Back.end() && it2->ff == x) {
            cout << it2->ss << " ";
            Front.erase({mp[it2->ss].ff, it2->ss});
            Back.erase({mp[it2->ss].ss, it2->ss});
        }
        else cout << "-1 ";
    }
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