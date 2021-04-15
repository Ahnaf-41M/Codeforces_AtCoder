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
   int n, x, y;
   cin >> n >> x >> y;
   if (n == 2)
      cout << x << " " << y << endl;
   else {
      vector<int> divs, ans;
      int diff = y - x;
      for (int cur = 1; cur <= 100; cur++) {
         int done[55] = {0}, now = x + cur;
         vector<int> tmp;
         tmp.pb(x);
         done[x] = 1;

         while (now <= y && tmp.size() < n) {
            done[now] = 1;
            tmp.pb(now);
            now += cur;
         }
         if (!done[y]) continue;
         now = x - cur;
         while (tmp.size() < n && now >= 1) {
            tmp.pb(now);
            now -= cur;
         }
         now = y + cur;
         while (tmp.size() < n) {
            tmp.pb(now);
            now += cur;
         }
         for (int ch : tmp)
            ans.pb(ch);
         break;
      }
      for (int ch : ans)
         cout << ch << " ";
      cout << endl;

   }
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}