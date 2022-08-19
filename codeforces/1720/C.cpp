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
    int n, m, one = 0;

    cin >> n >> m;
    char s[n][m];
    rep(i, 0, n - 1) rep(j, 0, m - 1) cin >> s[i][j], one += (s[i][j] == '1');

    int mn = 3;
    rep(i, 0, n - 1) {
        rep(j, 0, m - 1) {
            int a = 3, b = 3, c = 3, d = 3;
            if (i + 1 < n && j - 1 >= 0) {
                a = s[i][j] - '0' + s[i][j - 1] - '0' + s[i + 1][j - 1] - '0';
                c = s[i][j] - '0' + s[i + 1][j] - '0' + s[i + 1][j - 1] - '0';
            }
            if (i + 1 < n && j + 1 < m) {
                b = s[i][j] - '0' + s[i][j + 1] - '0' + s[i + 1][j + 1] - '0';
                d = s[i][j] - '0' + s[i + 1][j] - '0' + s[i + 1][j + 1] - '0';
            }
            mn = min({mn, a, b, c, d});
        }
    }
    if (mn == 0) cout << one << "\n";
    else cout << one - mn + 1 << "\n";
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