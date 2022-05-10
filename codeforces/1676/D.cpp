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

int ar[204][204];
int n, m, ans, tmp;

void Solve(int tc)
{
    cin >> n >> m;
    ans = 0, tmp = 0;
    rep(i, 1, n) rep(j, 1, m) cin >> ar[i][j];

    rep(i, 1, n) {
        rep(j, 1, m) {
            tmp = 0;
            // call(i, j);
            int x = i, y = j;
            while (x >= 1 && y >= 1) tmp += ar[x--][y--];
            x = i + 1, y = j + 1;
            while (x <= n && y <= m) tmp += ar[x++][y++];
            x = i - 1, y = j + 1;
            while (x >= 1 && y <= m) tmp += ar[x--][y++];
            x = i + 1, y = j - 1;
            while (x <= n && y >= 1) tmp += ar[x++][y--];
            ans = max(ans, tmp);
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