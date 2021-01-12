#include <bits/stdc++.h>
#include <ext/rope>

#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            100005

#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)

using namespace std;
using namespace __gnu_cxx;

vector<int> adj[2 * MX];
int cost[2 * MX], N, M;
int buyCst[2 * MX], indeg[2 * MX], profit[2 * MX];
void Solve()
{
   cin >> N >> M;
   rep(i, 1, N) cin >> cost[i];

   while (M--) {
      int u, v; cin >> u >> v;
      adj[u].pb(v);
      indeg[v]++;
   }

   queue<int> Q;
   rep(i, 1, N) {
      buyCst[i] = cost[i];
      profit[i] = INT_MIN;
      if (indeg[i] == 0)
         Q.push(i);
   }

   while (!Q.empty()) {
      int nd = Q.front();
      Q.pop();
      for (int ch : adj[nd]) {
         indeg[ch]--;
         if (indeg[ch] == 0)
            Q.push(ch);
         buyCst[ch] = min(buyCst[nd], buyCst[ch]);
         profit[ch] = max(profit[ch], cost[ch] - buyCst[nd]);
      }
   }

   int ans = INT_MIN;
   rep(i, 1, N) ans = max(ans, profit[i]);
   cout << ans;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   //int T;
   //cin >> T;

   //while (T--)
   Solve();

   return 0;
}