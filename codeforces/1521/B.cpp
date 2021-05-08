#include <bits/stdc++.h>
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

struct info
{
   int i, j, x, y;
};
void Solve(int tc)
{
   int n, mx = 1e9 + 7, mn = INT_MAX, ind;
   vector<info> ans;

   cin >> n;
   int ar[n + 1];

   rep(i, 1, n) {
      cin >> ar[i];
      if (ar[i] < mn) {
         mn = ar[i];
         ind = i;
      }
   }
   int cur = mn;
   rep(i, ind + 1, n) ans.pb({ind, i, mn, ++cur});
   cur = mn;
   irep(i, ind - 1, 1) ans.pb({ind, i, mn, ++cur});
   cout << ans.size() << "\n";
   for (auto it : ans)
      cout << it.i << " " << it.j << " " << it.x << " " << it.y << "\n";

   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}