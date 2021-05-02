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

vector<int> ans[MX];

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
   return p1.first < p2.first;
}
void Solve()
{
   int n, m, x, turn = 1;
   vector<pair<int, int> > v;

   cin >> n >> m >> x;
   int ar[n+5];
   rep(i, 0, n - 1) {
      int k; cin >> k;
      ar[i] = k;
      v.pb({k, i});
   }
   sort(all(v), cmp);

   while (!v.empty()) {
      if (turn) {
         rep(i, 1, m) {
            if (!v.empty()) {
               ans[i].pb(v.back().second);
               v.pop_back();
            }
         }
      } else {
         irep(i, m, 1) {
            if (!v.empty()) {
               ans[i].pb(v.back().second);
               v.pop_back();
            }
         }
      }
      turn ^= 1;
   }
   int mn = INT_MAX, mx = 0;

   rep(i, 1, m) {
      int cur = 0;
      for (int k : ans[i]) cur += ar[k];
      mn = min(cur, mn);
      mx = max(cur, mx);
   }
   if (mx - mn > x) cout << "NO\n";
   else {
      rep(i, 1, m) {
         for (int k : ans[i]) ar[k] = i;
      }
      cout << "YES\n";
      rep(i, 0, n - 1) cout << ar[i] << " ";
      cout << endl;
   }
   rep(i, 1, m) ans[i].clear();
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