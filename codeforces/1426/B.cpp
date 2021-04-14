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
   int n, m, ok1 = 0, ok2 = 0, ok3 = 0;

   cin >> n >> m;

   rep(i, 1, n) {
      int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
      if (y1 == x2 && x1 == y2) ok1++;
      if (y1 == x2) ok2++;
   }
   if ((m & 1))
      cout << "NO\n";
   else if ((m == 2 && ok1) || ok2)
      cout << "YES\n";
   else
      cout << "NO\n";

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