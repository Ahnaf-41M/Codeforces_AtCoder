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
    int n, cnt = 0;
    cin >> n;
    int ar[10] = {};


    rep(i, 1, n) {
        int x; cin >> x;
        ar[x]++;
    }
    rep(i, 0, 9) {
        if (!ar[i]) cnt++;
    }

    // cout << cnt << "\n";
    int ans = (cnt * (cnt - 1)) / 2;
    ans *= 6;
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