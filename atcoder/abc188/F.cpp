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

map<int, int> dis;
void Solve()
{
   int cnt = 0, x, y;
   deque<int> Q;

   cin >> x >> y;
   if (x >= y)
      cout << x - y;
   else {
      Q.pb(y);
      dis[y] = 0;
      int ans = y - x;
      while (!Q.empty()) {
         int cur = Q.front(); 
         Q.pop_front();

         if (dis[cur] >= ans)
            break;

         ans = min(ans, dis[cur] + abs(cur - x));

         if (cur <= x)
            continue;
         if (cur & 1) {
            if (!dis[cur - 1]) {
               Q.pb(cur - 1);
               dis[cur - 1] = dis[cur] + 1;
            }
            if (!dis[cur + 1]) {
               Q.pb(cur + 1);
               dis[cur + 1] = dis[cur] + 1;
            }
         }
         else {
            if (!dis[cur / 2]) {
               dis[cur / 2] = dis[cur] + 1;
               Q.pb(cur / 2);
            }
         }
      }
      cout << ans;
   }
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