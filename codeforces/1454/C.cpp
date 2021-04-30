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

deque<int> adj[2 * MX];
void Solve()
{
   int n, mn = INT_MAX, mx = 0, ind, ans = INT_MAX;
   cin >> n;

   rep(i, 1, n) {
      int x; cin >> x;
      adj[x].pb(i);
   }

   rep(i, 1, n) {
      if (adj[i].empty()) continue;

      int cur = 0;
      if (adj[i].front() - 1 > 0) cur++;
      if (n - adj[i].back() > 0) cur++;

      int l = adj[i].front(); adj[i].pop_front();
      while (!adj[i].empty()) {
         int r = adj[i].front(); adj[i].pop_front();
         // cout << l <<" "<<r<<" "<<r-l<<endl;
         if (r - l > 1) cur++;
         l = r;
      }
      ans = min(ans, cur);
   }

   cout << ans << "\n";

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