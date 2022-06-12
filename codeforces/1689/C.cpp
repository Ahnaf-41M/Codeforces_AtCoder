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

vector<int> adj[3 * MX];
int n, ans, sub_tree[3 * MX], saved[3 * MX], vis[3 * MX];


void dfs1(int nd, int par)
{
    sub_tree[nd]++;
    for (int ch : adj[nd]) {
        if (par != ch) {
            dfs1(ch, nd);
            sub_tree[nd] += sub_tree[ch];
        }
    }
}
void dfs2(int nd)
{
    int res = 0, x = -1, y = -1, x_sub = 0, y_sub = 0;

    vis[nd] = 1;
    for (int ch : adj[nd]) {
        if (!vis[ch]) {
            dfs2(ch);
            if (x == -1) x = ch, x_sub = sub_tree[ch];
            else y = ch, y_sub = sub_tree[ch];
        }
    }
    if (x != -1 && y != -1)
        res = max(saved[x] + y_sub - 1, saved[y] + x_sub - 1);
    else if (x != -1)
        res = sub_tree[x] - 1;
    saved[nd] = res;
}

void Solve(int tc)
{
    vector<int> v;
    cin >> n;

    rep(i, 1, n) v.pb(i);
    rep(i, 1, n - 1) {
        int x, y; cin >> x >> y;
        adj[x].pb(y), adj[y].pb(x);
    }
    dfs1(1, -1);
    dfs2(1);

    cout << saved[1] << "\n";

    rep(i, 1, n) {
        adj[i].clear();
        vis[i] = saved[i] = 0;
        sub_tree[i] = 0;
    }
    ans = 0;
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