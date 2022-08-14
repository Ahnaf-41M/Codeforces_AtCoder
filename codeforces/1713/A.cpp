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
    int n, mnX = 0, mxX = 0, mnY = 0, mxY = 0;
    cin >> n;

    rep(i, 1, n) {
        int x, y;
        cin >> x >> y;
        mnX = min(mnX, x), mxX = max(mxX, x);
        mnY = min(mnY, y), mxY = max(mxY, y);
    }
    int ans = abs(mnX) * 2 + mxX * 2 + abs(mnY) * 2 + mxY * 2;
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