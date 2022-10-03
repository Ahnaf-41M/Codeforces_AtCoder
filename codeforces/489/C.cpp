#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

void Solve(int tc)
{
    int m, s, s2;
    cin >> m >> s;
    s2 = s;

    vector<int> v;
    while (s2 > 0) {
        int x = min(s2, (int)9);
        v.pb(x);
        s2 -= x;
    }
    if (m == 1 && s == 0) cout << "0 0";
    else if (m < v.size() || v.empty()) cout << "-1 -1\n";
    else if (m == v.size()) {
        reverse(all(v));
        for (int x : v) cout << x;
        cout << " ";
        reverse(all(v));
        for (int x : v) cout << x;
    }
    else {
        int zeros = m - v.size();
        reverse(all(v));
        cout << 1;
        for (int i = 1; i <= zeros - 1; i++) cout << 0;
        for (int i = 0; i < v.size(); i++) {
            if (!i) cout << v[i] - 1;
            else cout << v[i];
        }
        cout << " ";
        while (!v.empty()) cout << v.back(), v.pop_back();
        while (zeros-- > 0) cout << 0;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    // cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}