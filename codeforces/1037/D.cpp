#include <bits/stdc++.h>
#include <ext/rope>

#define  pb   push_back
#define  int  long long
#define  endl "\n"
#define  MX   100005

#define  W(t)            while(t--)
#define  all(v)          v.begin(),v.end()
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  rep(i,a,b)      for(int i = a; i <= b; i++)

using namespace std;
using namespace __gnu_cxx;

vector<int> seq, adj[2 * MX], ans;
int n, occur[2 * MX];
bool vis[2 * MX];

void bfs()
{
   queue<int> Q;
   Q.push(1);
   vis[1] = true;

   while (!Q.empty())
   {
      int cur = Q.front();
      Q.pop();
      ans.pb(cur);

      for (int ch : adj[cur]) {
         if (!vis[ch]) {
            Q.push(ch);
            vis[ch] = true;
         }
      }
   }
}
bool cmp(int a, int b)
{
   return occur[a] < occur[b];
}
void solve()
{
   cin >> n;

   rep(i, 1, n - 1) {
      int x, y;
      cin >> x >> y;
      adj[x].pb(y);
      adj[y].pb(x);
   }
   rep(i, 1, n) {
      int x;
      cin >> x;
      seq.pb(x);
      occur[x] = i;
   }
   rep(i, 1, n) sort(all(adj[i]), cmp);

   bfs();
   // rep(i, 0, ans.size() - 1) cout << ans[i] << " ";
   if (ans == seq)
      cout << "Yes\n";
   else
      cout << "No\n";

   return;
}
signed main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   solve();

   return 0;
}