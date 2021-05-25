#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  pb           push_back
#define  MX           100005
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  gcd(a,b)     __gcd(a,b)
#define  lcm(a,b)     (a*b)/gcd(a,b)
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int dp[MX][2];
PII val[MX];
vector<int> adj[MX];
int n;
bool vis[MX];

void Clear()
{
   rep(i, 1, n) {
      adj[i].clear();
      vis[i] = 0;
      dp[i][0] = dp[i][1] = 0;
   }
}
void dfs(int nd, int par)
{
   vis[nd] = 1;
   for (int ch : adj[nd]) {
      if (!vis[ch]) {
         dfs(ch, nd);
         int f1 = abs(val[nd].ff - val[ch].ff), f2 = abs(val[nd].ff - val[ch].ss);
         int s1 = abs(val[nd].ss - val[ch].ff), s2 = abs(val[nd].ss - val[ch].ss);
         //adding max for taking val[nd].ff in dp[nd][0] and val[nd].ss in dp[nd][1]
         dp[nd][0] += max(dp[ch][0] + f1, dp[ch][1] + f2);
         dp[nd][1] += max(dp[ch][0] + s1, dp[ch][1] + s2);
      }
   }

}
void Solve(int tc)
{
   cin >> n;
   rep(i, 1, n) cin >> val[i].ff >> val[i].ss;
   rep(i, 1, n - 1) {
      int u, v; cin >> u >> v;
      adj[u].pb(v), adj[v].pb(u);
   }
   dfs(1, -1);
   cout << max(dp[1][0], dp[1][1]) << endl;
   Clear();
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}