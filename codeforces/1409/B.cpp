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
   int a, b, x, y, n, a1, b1, n1, a2, b2;
   cin >> a >> b >> x >> y >> n;

   a1 = a, b1 = b, n1 = n, a2 = a, b2 = b;

   a = max(x, a - n);
   n -= (a1 - a);
   b = max(y, b - n);

   n = n1;
   b2 = max(y, b2 - n);
   n -= (b1 - b2);
   a2 = max(x, a2 - n);
   // cout << a << " " << b << " " << a2 << " " << b2 << endl;
   cout << min(a * b, a2 * b2) << endl;
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