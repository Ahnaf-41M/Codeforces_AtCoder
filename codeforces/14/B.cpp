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

int Can[1005];
void Solve()
{
   int n, x0, mx, mn = 2000;
   vector<pair<int, int>> v;

   cin >> n >> x0;
   mx = x0;
   rep(i, 1, n) {
      int a, b; cin >> a >> b;
      v.pb({min(a, b), max(a, b)});
   }

   for (auto it : v) {
      rep(i, it.first, it.second) Can[i]++;
   }
   rep(i, 1, 1000) {
      if (Can[i] == n) {
         if (abs(i - x0) < mn) {
            mn = abs(i - x0);
            mx = i;
         }
      }
   }

   cout << (mn == 2000 ? -1 : abs(mx - x0));
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