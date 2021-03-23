#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define ll  long long
using namespace std;
using namespace __gnu_pbds;
template <typename T>  using ordered_set =
   tree<T, null_type, less<T>,
   rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   ordered_set<ll> v;
   for (ll i = 1; i <= 1000000; i++) {
      string cur = to_string(i);
      cur += cur;
      v.insert(stoll(cur));
   }
   ll n;
   cin >> n;
   cout << v.order_of_key(n + 1);
   return 0;
}
