#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
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
using namespace __gnu_pbds;
template <typename T>  using ordered_set =
   tree<T, null_type, less_equal<T>, //use less_equal for storing duplicates
   rb_tree_tag, tree_order_statistics_node_update>;

int ar[2 * MX], br[2 * MX], diff[2 * MX];
void Solve()
{
   ordered_set<int> till;
   int n, ans = 0;

   cin >> n;
   rep(i, 1, n) cin >> ar[i];
   rep(i, 1, n) cin >> br[i];
   rep(i, 1, n) diff[i] += ar[i] - br[i];

   irep(i, n, 1) {
      int cur = diff[i];
      if (till.empty()) till.insert(cur);
      else {
         cur *= -1;
         cur++;
         ans += till.size() - till.order_of_key(cur);
         till.insert(diff[i]);
      }
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