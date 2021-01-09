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
   int n, m;
   vector<int> a, b, Sum1, Sum2;

   cin >> n;
   rep(i, 0, n - 1) {
      int x; cin >> x;
      a.pb(x);
   }
   cin >> m;
   rep(i, 0, m - 1) {
      int x; cin >> x;
      b.pb(x);
   }
   int res1 = 0 , res2 = 0, cur = 0;

   for (int x : a) {
      cur += x;
      res1 = max(cur, res1);
   }
   cur = 0;
   for (int x : b) {
      cur += x;
      res2 = max(cur, res2);
   }
   cout << res1 + res2 << endl;
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