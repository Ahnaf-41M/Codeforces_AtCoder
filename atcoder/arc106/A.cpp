#include <bits/stdc++.h>
#include <ext/rope>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

#define  ff      first
#define  ss      second
#define  pb      push_back
#define  ll      long long
#define  MX      100005
#define  inf     1000000
#define  mod     1000000007
#define  endl    "\n"

#define  W(t)            while(t--)
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*(b/gcd(a,b)))
#define  all(v)          v.begin(),v.end()
#define  ZERO(a)         memset(a,0,sizeof(a))
#define  MINUS(a)        memset(a,-1,sizeof(a))
#define  rep(i,a,b)      for(i = a; i < b; i++)
#define  IOS             ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;
template <typename T>  using ordered_set =
   tree<T, null_type, less<T>,
   rb_tree_tag, tree_order_statistics_node_update>;

ll BigPOW(ll a, ll n)
{
   ll res = 1;
   while (n) {
      if (n & 1)
         res *= a;
      a *= a;
      n /= 2;
   }
   return res;
}
int main()
{

   IOS
   ll n;
   cin >> n;
   for (ll i = 1; i < 38; i++) {
      for (ll j = 1; j < 26; j++) {
         if (BigPOW(3, i) + BigPOW(5, j) == n) {
            cout << i << " " << j << endl;
            return 0;
         }
      }
   }
   cout << -1;
   return 0;
}