#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           5005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int ans[501][501];
void Solve(int tc)
{
    int r, c;

    cin >> r >> c;
    if (r == c && r == 1) cout << "0\n";
    else if (r == 1 || c == 1) {
        int i = 2;
        if (r == 1) while (i <= c + 1) cout << i++ << " ";
        else while (i <= r + 1) cout << i++ << "\n";
    }
    else {
        rep(i, 1, r) {
            rep(j, 1, c) {
                ans[i][j] = i * (j + r);
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    //cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}