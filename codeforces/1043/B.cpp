#pragma GCC target ("sse4.2")
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
#define  rep(i,a,b)      for(ll i = a; i <= b; i++)
#define  irep(i,b,a)     for(ll i = b; i >= a; i--)
#define  IOS             ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;
template <typename T>  using ordered_set =
   tree<T, null_type, less<T>,
   rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
//#ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//#endif

   IOS
   int n; cin >> n;
   int a[n + 1] = {};
   set<int> ans;
   vector<int> v; //v.pb(-1);

   rep(i, 1, n) cin >> a[i];

   v.pb(a[1]);

   rep(i, 2, n) v.pb(a[i] - a[i - 1]);

   rep(i, 0, v.size() - 1) {
      int cur = 0, last = 0;
      bool ok = true;
      rep(j, 1, n) {
         cur = v[(j - 1) % (i + 1)] + a[j - 1];
         // cout << cur << " " << a[j] << endl;
         if (cur != a[j]) {
            ok = false;
            break;
         }
         last = cur;
      }
      // cout << endl;
      if (ok)
         ans.insert(i + 1);
   }
   cout << ans.size() << endl;
   for (auto it : ans)
      cout << (it) << " ";

}