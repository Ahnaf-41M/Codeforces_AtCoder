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
    string O, E, ans;
    cin >> O >> E;

    int mn = min(O.size(), E.size());
    rep(i, 0, mn - 1) ans.pb(O[i]), ans.pb(E[i]);

    if (O.size() > E.size()) ans.pb(O.back());
    else if (O.size() < E.size()) ans.pb(E.back());

    cout << ans << "\n";
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