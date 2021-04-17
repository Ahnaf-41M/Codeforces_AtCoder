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
   int n, vb, vs, ans, x, y;
   double mnDis = INT_MAX, mnTime = INT_MAX, cur = 0;
   
   cin >> n >> vb >> vs;

   double a[105];
   rep(i, 1, n) {
      cin >> a[i];
   }
   cin >> x >> y;

   rep(i, 2, n) {
      double dis = sqrt(((a[i] - x ) * (a[i] - x)) + (y * y));
      cur += (a[i] - a[i - 1]);
      double t1 = dis / vs;
      double t2 = cur / vb;
      if (mnTime > t1 + t2) {
         mnTime = t1 + t2;
         mnDis = dis;
         ans = i;
      }
      else if (mnTime == t1 + t2 && dis < mnDis) {
         mnDis = dis;
         ans = i;
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