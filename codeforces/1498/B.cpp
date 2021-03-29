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

vector<int> v;

void pre()
{
   irep(i, 24, 0) v.pb(1 << i);
}
void Solve()
{
   map<int, int> mp;
   int n, w, res = 0;

   cin >> n >> w;

   rep(i, 1, n) {
      int x; cin >> x;
      mp[x]++;
   }

   int tmp = w, last = 0;
   while (true) {
      int ok1 = 0, ok2 = 0;
      for (int x : v) {
         if (mp[x]) {
            if (tmp - x >= 0) {
               ok2 = 1;
               while (mp[x] && tmp - x >= 0)
                  tmp -= x, mp[x]--, ok2 = 1;
            }
            ok1 = 1;
         }
      }
      if (!ok1) {
         res = (last ? res + 1 : res);
         break;
      }
      if (!ok2)
         res++, tmp = w, last = 0;
      else last = 1;
   }
   cout << res << endl;

   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   pre();

   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}