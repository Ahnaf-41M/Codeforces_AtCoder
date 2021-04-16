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
   int n, a = 0, b = 0;
   string s;
   cin >> n >> s;
   rep(i, 0, n - 1) {
      if (s[i] == 'T') a++;
      else b++;
   }
   if (s[0] == 'M' || s[n - 1] == 'M' || 2 * b != a)
      cout << "NO\n";
   else {
      int cur = 0, ok = 1;
      int t = 0, m = 0;
      rep(i, 0, n - 1) {
         if (s[i] == 'T') {
            if (m)
               m--;
            else
               t++;
         }
         else {
            if (t)
               t--;
            else
               m++;
         }
         if (m > t || t > b)
            ok = false;
      }
      if (ok)
         cout << "YES\n";
      else
         cout << "NO\n";
   }
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