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

vector<int> adj[MX], pre[MX];
void Solve(int tc)
{
   int n, q;
   string s;
   cin >> n >> q >> s;

   rep(i, 0, n - 1) {
      int nd = s[i];
      adj[nd].pb(i + 1);
   }

   while (q--) {
      int ans = 0, l, r, cnt = 1;
      cin >> l >> r;
      // ans += (r - l + 1);
      for (char ch = 'a'; ch <= 'z'; ch++) {
         int nd = ch;
         int lb = lower_bound(all(adj[nd]), l) - adj[nd].begin();
         int ub = upper_bound(all(adj[nd]), r) - adj[nd].begin();
         ub--;
         if (lb <= ub)
            ans += (nd - 96) * (ub - lb + 1);

      }
      cout << ans << "\n";
   }
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int T = 1;
   // cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}