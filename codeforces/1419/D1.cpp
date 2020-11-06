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
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  all(v)          v.begin(),v.end()
#define  clr(a,x)        memset(a,x,sizeof(a))
#define  rep(i,a,b)      for(i = a; i < b; i++)
#define  IOS             ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;
template <typename T>  using ordered_set =
   tree<T, null_type, less<T>,
   rb_tree_tag, tree_order_statistics_node_update>;

int main()
{

   IOS
   int n, i, j, ans = 0; cin >> n;
   int a[n];
   rep(i, 0, n) cin >> a[i];

   sort(a, a + n);
   i = 0; j = n - 1;
   if (n & 1) ans = n / 2;
   else ans = n / 2 - 1;

   cout << ans << endl;
   while (i <= j)
   {
      if (i != j)
         cout << a[j] << " " << a[i] << " ";
      else
         cout << a[i] << " ";
      i++; j--;
   }

}