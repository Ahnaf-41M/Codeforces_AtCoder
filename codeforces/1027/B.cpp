#include <bits/stdc++.h>
#include <ext/rope>

#define  pb   push_back
#define  int  long long
#define  endl "\n"
#define  MX   100005

#define  W(t)            while(t--)
#define  all(v)          v.begin(),v.end()
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  rep(i,a,b)      for(int i = a; i <= b; i++)

using namespace std;
using namespace __gnu_cxx;

void solve()
{
   int n, q, ans;
   cin >> n >> q;

   W(q)
   {
      int x, y;
      cin >> x >> y;
      int pos = (x - 1) * n + y;
      int upn = (n * n + 1) / 2;

      ans = (pos + 1) / 2;

      if ((x + y) & 1)
         ans += upn;
      cout << ans << endl;
   }

   return;
}
signed main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   solve();

   return 0;
}