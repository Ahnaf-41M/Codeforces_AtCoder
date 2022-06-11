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
    int n;
    cin >> n;

    int s[n], f[n];

    for (int &x : s) cin >> x;
    for (int &x : f) cin >> x;

    int last = -1;
    rep(i, 0, n - 1) {
        if (last < s[i]) last = s[i];
        cout << f[i] - last << " ";
        last = f[i];
    }
    cout << "\n";
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