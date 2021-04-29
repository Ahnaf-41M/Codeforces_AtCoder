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

int Cube(int d)
{
   return d * d * d;
}
void Solve()
{
   int n, mx;
   cin >> n;
   mx = cbrt(n);

   rep(i, 1, mx) {
      int cur = n - Cube(i);
      int rt = cbrt(cur);
      if (((Cube(i) + Cube(mx - i) == n || Cube(rt) == cur)
            && mx - i > 0) || Cube(i) + Cube(i) == n) {
         cout << "YES\n";
         return;
      }
   }
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