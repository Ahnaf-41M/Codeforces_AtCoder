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

int Length(int d)
{
    int c = 0;
    while (d) d /= 10, c++;
    return c;
}
void Solve(int tc)
{
    int n, ans = 0;
    int cnt1[10] = {}, cnt2[10] = {};
    multiset<int> s;

    cin >> n;
    rep(i, 1, n) {
        int x; cin >> x;
        s.insert(x);
    }
    rep(i, 1, n) {
        int x; cin >> x;
        auto it = s.find(x);
        if (it != s.end()) {
            s.erase(it);
            continue;
        }
        if (x < 10) cnt2[x]++;
        else ans++, cnt2[Length(x)]++;
    }
    for (int x : s) {
        if (x < 10) cnt1[x]++;
        else ans++, cnt1[Length(x)]++;
    }

    rep(i, 1, 9) {
        int mn = min(cnt1[i], cnt2[i]);
        cnt1[i] -= mn, cnt2[i] -= mn;
    }
    rep(i, 2, 9) ans += (cnt1[i] + cnt2[i]);

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