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

void Solve()
{
   int n;
   vector<int> miners, diamond;
   vector<pair<int, int>> vp;

   scanf("%lld", &n);

   rep(i, 1, 2 * n) {
      int x, y; scanf("%lld%lld", &x, &y);
      y = abs(y), x = abs(x);
      if (!x) miners.pb(y);
      else diamond.pb(x);
   }
   sort(all(miners));
   sort(all(diamond));
   // rep(i, 0, n - 1) {
   //    vp.pb({miners[i], diamond[i]});
   // }

   // sort(all(vp), cmp);
   long double ans = 0;

   rep(i, 0, n - 1) {
      ans += sqrt(miners[i] * miners[i] + diamond[i] * diamond[i]);
   }
   printf("%.15Lf\n", ans);
   // cout << ans<<endl;
   return;
}
signed main()
{
   // ios_base::sync_with_stdio(0);
   // cin.tie(0);
   // cout.tie(0);

   int T;
   scanf("%lld", &T);

   while (T--)
      Solve();

   return 0;
}