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
   int m, n, a, b, r1, r2;

   cin >> n >> m >> a >> b;

   if (m * a <= b)
      cout << n*a << endl;

   else {
      r1 = n / m;
      r2 = (n % m != 0);

      if ((r1 + r2)*b <= r1 * b + a * (n % m))
         cout << (r1 + r2)*b << endl;
      else
         cout << r1*b + a*(n % m) << endl;
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