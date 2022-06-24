#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           1005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int grid[MX][MX], n, m, ok;
int mnDP[MX][MX], mxDP[MX][MX];
bool Valid(int x, int y)
{
    return (x >= 1 && x <= n && y >= 1 && y <= m);
}
void Call(int x, int y)
{
    if (mxDP[x][y] != -1e10) return;

    if (x == 1 && y == 1) mnDP[x][y] = mxDP[x][y] = grid[x][y];
    else if (x == 1) {
        mnDP[x][y] = mnDP[x][y - 1] + grid[x][y];
        mxDP[x][y] = mxDP[x][y - 1] + grid[x][y];
    }
    else if (y == 1) {
        mnDP[x][y] = mnDP[x - 1][y] + grid[x][y];
        mxDP[x][y] = mxDP[x - 1][y] + grid[x][y];
    }
    else {
        if (mxDP[x - 1][y] != -1e10 && mxDP[x][y - 1] != -1e10) {
            mnDP[x][y] = grid[x][y] + min(mnDP[x - 1][y], mnDP[x][y - 1]);
            mxDP[x][y] = grid[x][y] + max(mxDP[x - 1][y], mxDP[x][y - 1]);
        }
        else return;
    }
    if (Valid(x + 1, y)) Call(x + 1, y);
    if (Valid(x, y + 1)) Call(x, y + 1);
}
void Solve(int tc)
{
    cin >> n >> m;
    rep(i, 1, n) rep(j, 1, m) cin >> grid[i][j];

    Call(1, 1);
    // cout << mxDP[n][m] << " " << mnDP[n][m] << "\n";
    if (((n + m) & 1) && mnDP[n][m] <= 0 && 0 <= mxDP[n][m]) cout << "YES\n";
    else cout << "NO\n";

    rep(i, 0, n) rep(j, 0, m) mnDP[i][j] = 1e10, mxDP[i][j] = -1e10;

}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    rep(i, 0, MX - 1) rep(j, 0, MX - 1) mnDP[i][j] = 1e10, mxDP[i][j] = -1e10;
    int T = 1;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}