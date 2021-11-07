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

vector<int> adj[2 * MX], last;
int n, Time[2 * MX], dis[2 * MX], done[2 * MX];

void dfs(int nd)
{
   done[nd] = 1;
   for (int ch : adj[nd]) {
      if (!done[ch]) {
         dis[n] += dis[ch];
         dfs(ch);
      }
   }
}
void Solve(int tc)
{
   cin >> n;
   rep(i, 1, n) {
      int k;
      vector<int> tmp;

      cin >> Time[i] >> k;
      dis[i] = Time[i];
      while (k--) {
         int x; cin >> x;
         adj[i].pb(x);
         if (i == n) last.pb(x);
      }
   }
   dfs(n);
   // rep(i, 1, n) if (!done[i]) dfs(i);
   // for (int x : last) dis[n] += dis[x];
   cout << dis[n] << "\n";
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