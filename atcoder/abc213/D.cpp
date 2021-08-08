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

vector<int> adj[2 * MX];
bool vis[2 * MX];
vector<int> ans;
int n, m;


void dfs(int nd)
{
   vis[nd] = 1;
   ans.pb(nd);

   for (int ch : adj[nd])
      if (!vis[ch]) {
         dfs(ch);
         ans.pb(nd);
      }
}
void Solve(int tc)
{
   cin >> n;
   rep(i, 1, n - 1) {
      int x, y;
      cin >> x >> y;
      adj[x].pb(y);
      adj[y].pb(x);
   }
   rep(i, 1, n) sort(all(adj[i]));
   dfs(1);
   for (int x : ans) cout << x << " ";
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