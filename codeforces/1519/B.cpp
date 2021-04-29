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

void Solve()
{
   int mn, mx, n, m, k;
   cin >> n >> m >> k;
   // mn = min(n, m), mx = max(n, m);
   mn = (n - 1) + (m - 1) * n;
   mx = (n - 1) * m + (m - 1);
   if (mx == k || mn == k)
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