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

vector<int> adj[2000];
bool vis[2000];
map<string, int> ind;
map<int, string> handle;
string last;

void dfs(int nd)
{
   vis[nd] = 1;
   last = handle[nd];
   for (int ch : adj[nd])
      if (!vis[ch])
         dfs(ch);
}
void Solve()
{
   int q, k = 0; cin >> q;
   while (q--) {
      string s1, s2; cin >> s1 >> s2;
      if (!ind[s1]) ind[s1] = ++k, handle[k] = s1;
      if (!ind[s2]) ind[s2] = ++k, handle[k] = s2;
      adj[ind[s1]].pb(ind[s2]);
   }

   vector<pair<string, string>> ans;
   for (int i = 1; i <= k; i++) {
      if (!vis[i]) {
         dfs(i);
         ans.pb({handle[i], last});
      }
   }
   cout << ans.size() << endl;
   for (auto it : ans)
      cout << it.first << " " << it.second << endl; 
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