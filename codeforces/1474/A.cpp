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
   int n;
   string s;

   cin >> n >> s;

   int last = 1;
   string ans = "";

   rep(i, 0, n - 1) {
      if (!i) {
         ans += '1';
         if (s[i] == '1')
            last = 2;
         else
            last = 1;
      }
      else {
         if (last == 2) {
            if (s[i] == '1')
               ans += '0', last = 1;
            else
               ans += '1', last = 1;
         }
         else {
            if (s[i] == '1') {
               ans += '1', last = 2;
            }
            else {
               if (last == 0)
                  ans += '1', last = 1;
               else
                  ans += '0', last = 0;
            }
         }
      }
   }
   cout << ans << endl;
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