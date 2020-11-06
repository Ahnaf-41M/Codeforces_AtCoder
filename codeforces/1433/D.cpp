#include <bits/stdc++.h>
#include <ext/rope>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

#define  ff      first
#define  ss      second
#define  pb      push_back
#define  ll      long long
#define  MX      100005
#define  inf     INT_MAX
#define  mod     1000000007
#define  endl    "\n"

#define  W(t)            while(t--)
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  all(v)          v.begin(),v.end()
#define  clr(a,x)        memset(a,x,sizeof(a))
#define  rep(i,a,b)      for(i = a; i < b; i++)
#define  irep(i,a,b)     for(i = a; i >= b; i--)
#define  IOS             ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;
template <typename T>  using ordered_set =
   tree<T, null_type, less<T>,
   rb_tree_tag, tree_order_statistics_node_update>;

int par[5500];

int root(int v)
{
   if (par[v] < 0)
      return v;
   else
      return par[v] = root(par[v]);
}
int main()
{
// #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
// #endif

   IOS
   int t, n, i; cin >> t;
   W(t)
   {
      cin >> n;
      int a[n + 1];
      vector<pair<int, int>> ans;
      map<int, int> mp;

      rep(i, 1, n + 1) {
         cin >> a[i];
         mp[i] = a[i];
         par[i] = -1;
      }
      int cnt = 0;
      for (int i = 1; i <= n; i++) {
         for (int j = i + 1; j <= n; j++) {
            if (mp[i] != mp[j]) {
               int r1 = root(i);
               int r2 = root(j);
               if (r1 != r2) {
                  par[r1] = r2;
                  ans.pb({i, j});
               }
            }
         }
      }
      rep(i, 1, n + 1) {
         if (par[i] == -1)
            cnt++;
      }
      if (cnt == 1) {
         cout << "YES\n";
         rep(i, 0, ans.size()) {
            cout << ans[i].ff << " " << ans[i].ss << endl;
         }
      }
      else
         cout << "NO\n";

   }
}