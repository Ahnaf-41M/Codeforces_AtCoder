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
    int n, ans = 0, cur = 0;

    cin >> n;
    int ar[n];
    for (int &x : ar) cin >> x;

    cur = ar[0];
    rep(i, 0, n - 2) {
        int dif = ar[i + 1] - ar[i];
        if (dif > 0)
            ans += dif;
        else {
            ans += abs(dif);
            cur -= abs(dif);
        }
    }
    ans += abs(cur); //total propagated to suffix
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