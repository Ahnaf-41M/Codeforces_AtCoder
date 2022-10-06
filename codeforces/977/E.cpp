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

vector<int> adj[2 * MX];
int vis[2 * MX], n, m, ans;
bool ok1, ok2;

void dfs(int nd, int par)
{
    vis[nd] = 1;
    for (int ch : adj[nd]) {
        if (!vis[ch])
            dfs(ch, nd);
        else if (adj[ch].size() > 2)
            ok2 = 0;
        else if (ch != par && vis[ch] == 1)
            ok1 = 1;
    }
    vis[nd] = 2;
}
void Solve(int tc)
{
    cin >> n >> m;
    while (m--) {
        int x, y; cin >> x >> y;
        adj[x].pb(y), adj[y].pb(x);
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            ok1 = 0, ok2 = 1;
            dfs(i, -1);
            ans += (ok1 & ok2);
        }
    }
    cout << ans << "\n";

}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    // cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}