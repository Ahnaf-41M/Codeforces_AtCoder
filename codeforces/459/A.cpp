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

double dis(int a, int b, int c, int d)
{
   return sqrt((a - b) * (a - b) + (c - d) * (c - d));
}
void Solve()
{
   int x1, y1, x2, y2;
   int x3, y3, x4, y4;
   cin >> x1 >> y1 >> x2 >> y2;

   if (x1 == x2) {
      x3 = x1 + y2 - y1, y3 = y1;
      x4 = x2 + y2 - y1, y4 = y2;
   }
   else if (y1 == y2) {
      y3 = y1 + x2 - x1, x3 = x1;
      y4 = y2 + x2 - x1, x4 = x2;
   }
   else if (abs(x2 - x1) == abs(y2 - y1)) {
      x3 = x1, y3 = y2;
      x4 = x2, y4 = y1;
   }
   else {
      cout << -1;
      return;
   }

   cout << x3 << " " << y3 << " " << x4 << " " << y4;

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