#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           300005
#define  pb           push_back
#define  ll           long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int n, k, d;
int dis[MX], vis_indx[MX];
vector<PII> adj[MX];
int ans;
queue<int> q;

void bfs()
{
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        if (dis[cur] == d) continue; //rom each city it must be possible to reach a police station by traveling at most d kilometers along the roads
        for (auto ch : adj[cur]) {
            if (dis[ch.ff] == -1) {
                dis[ch.ff] = dis[cur] + 1;
                q.push(ch.ff);
                vis_indx[ch.ss] = 1;
                ans--;
            }
        }
    }
}
void Solve(int tc)
{
    cin >> n >> k >> d;
    ans = n - 1;
    rep(i, 1, k) {
        int x; cin >> x;
        if (dis[x] == -1) { //there can be multiple police stations in one city
            dis[x] = 0;
            q.push(x);
        }
    }
    rep(i, 1, n - 1) {
        int x, y; cin >> x >> y;
        adj[x].pb({y, i});
        adj[y].pb({x, i});
    }
    bfs();

    cout << ans << "\n";
    rep(i, 1, n - 1) if (!vis_indx[i]) cout << i << " ";

}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    fill(dis, dis + MX, -1);

    int T = 1;
    //cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}