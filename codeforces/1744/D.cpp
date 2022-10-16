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
    int n, cnt = 0, mx = 0, ans = 0;
    cin >> n;
    vector<int> v;

    int ar[n];
    rep(i, 0, n - 1) {
        cin >> ar[i];
        int m = ar[i], p = 0;
        while (m % 2 == 0) m /= 2, p++;
        cnt += p;
        m = i + 1, p = 0;
        while (m % 2 == 0) m /= 2, p++;
        mx = max(p, mx);
        v.pb(p);
    }
    if (n <= cnt) cout << "0\n";
    else if (!mx) cout << "-1\n";
    else {
        n -= cnt;
        sort(all(v));
        while (!v.empty() && n > 0) {
            n -= v.back(); v.pop_back();
            ans++;
        }
        if (n <= 0) cout << ans << "\n";
        else cout << "-1\n";
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