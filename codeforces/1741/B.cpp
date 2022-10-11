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
    vector<int> v;
    cin >> n;

    int mid = (n + 1) / 2;
    while (n > mid) v.pb(n--);
    for (int i = 1; i <= n; i++) v.pb(i);

    n = v.size();
    for (int i = 0; i < n; ++i)
    {
        if ((i + 1 < n && abs(v[i] - v[i + 1]) == 1) || (i - 1 >= 0 && abs(v[i] - v[i - 1]) == 1)) continue;
        cout << "-1\n";
        return;
    }
    for (int x : v) cout << x << " ";
    cout << "\n";
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