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

int mod = 1e9 + 7;

int Pow(int a, int x) //a^mod-2 % mod
{
   int res = 1, cur = a;

   while (x) {
      if (x & 1)
         res = res * cur % mod;
      cur = cur * cur % mod;
      x >>= 1;
   }
   return res;
}
int Fact(int n)
{
   int res = 1;
   rep(i, 2, n) res = res * i % mod;
   return res;
}
int nCr(int n, int m)
{
   return Fact(n) * Pow(Fact(n - m) * Fact(m) % mod, mod - 2);
}
void Solve()
{
   int n, m;
   cin >> n >> m;
   cout << nCr(n + 2 * m - 1, 2 * m) % mod;
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