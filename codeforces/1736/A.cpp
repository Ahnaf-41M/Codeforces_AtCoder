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
    int n, ans = 0, c1[2] = {}, c2[2] = {};
    cin >> n;
    vector<int> a(n), b(n);
    for (int &x : a) cin >> x, c1[x]++;
    for (int &x : b) cin >> x, c2[x]++;

    if (a == b) {
        cout << "0\n";
        return;
    }

    if (c1[0] == c2[0]) cout << "1\n";
    else {
        // cout << "KKK: ";
        ans++;
        int tmp = 0;
        for (int i = 0; i < n; ++i)
        {
            tmp += (a[i] != b[i]);
        }
        sort(all(a));
        sort(all(b));
        for (int i = 0; i < n; ++i)
        {
            ans += (a[i] != b[i]);
        }
        ans = min(ans, tmp);
        cout << ans << "\n";
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