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
    int n, q;
    cin >> n >> q;

    int ar[n + 1];
    vector<int> pre(n + 1);
    ar[0] = 0;

    rep(i, 1, n) cin >> ar[i];
    sort(ar + 1, ar + n + 1, greater<int>());

    rep(i, 1, n) pre[i] = pre[i - 1] + ar[i];

    while (q--) {
        int x; cin >> x;
        int lb = lower_bound(all(pre), x) - pre.begin();
        if (lb > n) cout << "-1\n";
        else cout << lb << "\n";
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