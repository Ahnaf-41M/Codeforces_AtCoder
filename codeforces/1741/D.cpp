#include <bits/stdc++.h>
#define  ff           first
#define  ss           second
#define  MX           3000005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

vector<int> adj[MX];
int m, n;
void Solve(int tc)
{
    cin >> m;
    n = log2(m);

    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        adj[m + i].pb(x);
    }
    int cur = m - 1, ans = 0;
    while (cur >= 1) {
        if (adj[2 * cur][0] < adj[2 * cur + 1][0]) {
            for (int x : adj[2 * cur]) adj[cur].pb(x);
            for (int x : adj[2 * cur + 1]) adj[cur].pb(x);
        }
        else {
            for (int x : adj[2 * cur + 1]) adj[cur].pb(x);
            for (int x : adj[2 * cur]) adj[cur].pb(x);
            ans++;
        }
        cur--;
    }
    if (is_sorted(all(adj[1]))) cout << ans << "\n";
    else cout << "-1\n";

    for (int i = 0; i < 2 * m; ++i)
    {
        adj[i].clear();
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