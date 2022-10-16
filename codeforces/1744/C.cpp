#include <bits/stdc++.h>
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
    int n;
    char ch;
    string s;
    vector<int> v1, v2;

    cin >> n >> ch >> s;
    if (ch == 'g') {
        cout << "0\n";
        return;
    }
    rep(i, 0, n - 1) {
        if (s[i] == ch) v1.pb(i + 1);
        else if (s[i] == 'g') v2.pb(i + 1);
    }
    int ans = 0;
    for (int x : v1) {
        int lb = upper_bound(all(v2), x) - v2.begin();
        int cur = 0;
        if (lb == (int)v2.size()) {
            cur = n - x + v2[0];
        }
        else cur = v2[lb] - x;
        ans = max(ans, cur);
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