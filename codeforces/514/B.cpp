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

bool done[1010];
void Solve()
{
   /*Points (x1, y1), (x2, y2), (x3, y3) are on the
   same line, if (x2 - x1)(y3 - y1) = (x3 - x1)(y2 - y1).*/
   int n, x1, y1, ans = 0;
   vector<pair<int, int>> v;

   cin >> n >> x1 >> y1;

   rep(i, 1, n) {
      int x, y; cin >> x >> y;
      y -= y1, x -= x1;
      v.pb({x, y});
   }
   rep(i, 0, n - 1) {
      if (done[i])
         continue;
      ans++;
      rep(j, i, n - 1) {
         if (v[i].first * v[j].second == v[i].second * v[j].first)
            done[j] = 1;
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