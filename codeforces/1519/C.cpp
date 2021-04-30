#include <bits/stdc++.h>
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

vector<int> adj[2 * MX];

void Solve()
{
   int n;
   cin >> n;

   int pref[n + 1], ar[n + 1];
   pref[0] = 0;

   rep(i, 1, n) {
      cin >> ar[i];
      pref[i] = 0;
   }
   rep(i, 1, n) {
      int x; cin >> x;
      adj[ar[i]].pb(x);
   }

   rep(i, 1, n) {
      if (!adj[i].empty()) {
         adj[i].pb(INT_MAX);
         sort(all(adj[i]), greater<int>());
      }
   }
   rep(i, 1, n) {
      if (adj[i].empty()) continue;
      int sz = adj[i].size();
      rep(j, 2, sz - 1) {
         adj[i][j] += adj[i][j - 1];
         // cout << adj[i][j] <<" ";
      }
      rep(j, 1, sz - 1) {
         int mul = (sz - 1) / j;
         pref[j] += adj[i][j * mul];
      }
      // cout << endl;
   }

   rep(i, 1, n) cout << pref[i] << " ";
   cout << endl;
   rep(i, 1, n) adj[i].clear();
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}