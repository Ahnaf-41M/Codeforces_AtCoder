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
   cin >> n >> m;

   if ((m + 1 < n) || (n * 2 + 2 < m))
      cout << -1;
   else {
      string ans = "";
      if (abs(n - m) <= 1) {
         if (n > m)
            rep(i, 1, n + m) {
            if (i & 1)
               ans += '0';
            else
               ans += '1';
         }
         else {
            rep(i, 1, n + m) {
               if (i & 1)
                  ans += '1';
               else
                  ans += '0';
            }
         }
      } else {
         while (n || m) {
            if (n * 2 + 2 == m) {
               if (m >= 2)
                  ans += "11", m -= 2;
               if (n)
                  ans += '0', n--;
               // n--, m -= 2;
            }
            else {
               if (m > n) {
                  ans += '1', m--;
                  if (n)
                     ans += '0', n--;
               }
               else {
                  ans += '0', n--;
                  if (m)
                     ans += '1', m--;
               }

            }
         }
      }
      cout << ans;
   }
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