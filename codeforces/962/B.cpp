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
   int n, a, b;
   string s;
   int ans = 0;

   cin >> n >> a >> b >> s;

   rep(i, 0, n - 1) {
      if (!i) {
         if (s[i] == '.') {
            if (a > b) {
               if (a) {
                  a--, s[i] = 'A';
                  ans++;
               }
            }
            else {
               if (b) {
                  b--, s[i] = 'B';
                  ans++;
               }
            }
         }
      }
      else if (s[i - 1] == '*' && s[i] == '.') {
         if (a > b) {
            if (a) {
               a--, s[i] = 'A';
               ans++;
            }
         }
         else {
            if (b) {
               b--, s[i] = 'B';
               ans++;
            }
         }
      }
      else if (s[i] == '.') {
         if (s[i - 1] == 'A') {
            if (b) {
               ans++;
               s[i] = 'B', b--;
            }
         }
         else if (s[i - 1] == 'B') {
            if (a) {
               ans++;
               s[i] = 'A', a--;
            }
         }
         else {
            if (a) {
               s[i] = 'A', a--;
               ans++;
            }
            else if (b) {
               s[i] = 'B', b--;
               ans++;
            }
         }
      }
   }
   cout << ans;
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