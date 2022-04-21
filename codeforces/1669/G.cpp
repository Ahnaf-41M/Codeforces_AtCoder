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
    int n, m;
    cin >> n >> m;

    char s[n][m];
    rep(i, 0, n - 1) rep(j, 0, m - 1) cin >> s[i][j];

    irep(i, n - 1, 0) {
        rep(j, 0, m - 1) {
            int cur = i;
            if (s[i][j] == '*') {
                while (cur + 1 < n && s[cur + 1][j] == '.') {
                    cur++;
                }
                if (cur != i) {
                    s[i][j] = '.';
                    s[cur][j] = '*';
                }
            }
        }
    }
    rep(i, 0, n - 1) {
        rep(j, 0, m - 1) {
            cout << s[i][j];
        }
        cout << "\n";
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