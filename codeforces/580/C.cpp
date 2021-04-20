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

int cat[MX];
vector<int> adj[MX];
int n, m, ans;
bool OK[MX], vis[MX];
void dfs(int nd, int cur)
{
   vis[nd] = 1;
   if (cur > m)
      return;
   int child = 0;
   for (int ch : adj[nd]) {
      if (!vis[ch]) {
         dfs(ch, cat[ch] == 1 ? cur + 1 : 0);
         child++;
      }
   }
   if (!child)
      OK[nd] = 1;
}
void Solve()
{
   cin >> n >> m;
   rep(i, 1, n) cin >> cat[i];
   rep(i, 1, n - 1) {
      int x, y; cin >> x >> y;
      adj[x].pb(y);
      adj[y].pb(x);
   }
   dfs(1, cat[1]);

   rep(i, 1, n) {
      // if (OK[i]) cout << i << " ";
      ans += OK[i];
   }
   cout << ans;
   return;
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