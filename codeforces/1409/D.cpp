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

int cnt, n2;

int SOD(int n)
{
   int sod = 0;
   while (n)
      sod += n % 10, n2 = n % 10, n /= 10, cnt++;
   return sod;
}
int SOD2(int n)
{
   int sod = 0;
   while (n)
      sod += n % 10, n /= 10;
   return sod;
}
int POW(int x, int cc)
{
   rep(i, 1, cc) x *= 10;
   return x;
}
void Solve()
{
   int n, s;
   cnt = 0;
   cin >> n >> s;

   if (SOD(n) <= s)
      cout << 0 << endl;
   else {
      int base = 1, ans = 0;

      rep(i, 1, 18) {
         int ldgt = (n / base) % 10;
         int req = ((10 - ldgt) % 10) * base;
         n += req;
         ans += req;
         if (SOD(n) <= s)
            break;
         base *= 10;
      }
      cout << ans << endl;
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