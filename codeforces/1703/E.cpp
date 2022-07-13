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
    cin >> n;

    char ar[n + 1][n + 1];

    rep(i, 1, n) rep(j, 1, n) cin >> ar[i][j];
    if (n == 1) {
        cout << "0\n";
        return;
    }
    rep(i, 1, n) {
        rep(j, 1, n) {
            int x = n - i + 1, y = n - j + 1, tmp = 0;

            tmp += (ar[i][j] - '0'), tmp += (ar[x][y] - '0');
            tmp += (ar[y][i] - '0'), tmp += (ar[j][x] - '0');
            if (tmp == 4 || tmp == 0) continue;
            // cout << i << " " << j << " -- " << x << " " << y << "\n";
            ans += min(tmp, 4 - tmp);
            ar[i][j] = '1', ar[x][y] = '1', ar[y][i] = '1', ar[j][x] = '1';
        }
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