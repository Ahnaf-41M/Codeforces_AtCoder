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
using  pii = pair<int, pair<int, int> > ;

bool cmp(pii a, pii b)
{
   return a.first < b.first;
}
void Solve()
{
   int n, m, ans[105][105];
   vector<int> adj[105];
   vector<pii> v;
   bool done[105][105] = {};

   cin >> n >> m;

   rep(i, 0, n - 1) {
      rep(j, 0, m - 1) {
         int x; cin >> x;
         adj[i].pb(x);
      }
      sort(all(adj[i]));
   }
   rep(i, 0, n - 1) {
      rep(j, 0, m - 1) {
         v.pb({adj[i][j], {i, j}});
         ans[i][j] = 0;
      }
   }
   sort(all(v), cmp);

   rep(j, 0, m - 1) {
      int x = v[j].second.first, y = v[j].second.second;
      int val = v[j].first;
      ans[x][j] = val;
   }
   rep(i, m, v.size() - 1) {
      int x = v[i].second.first, y = v[i].second.second;
      int val = v[i].first;
      // cout << x <<" "<<y <<" --> "<<val<<endl;
      rep(j, 0, m - 1) if (!ans[x][j]) {
         ans[x][j] = val;
         break;
      }
   }
   rep(i, 0, n - 1) {
      rep(j, 0, m - 1) {
         cout << ans[i][j] << " ";
      }
      cout << endl;
   }
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