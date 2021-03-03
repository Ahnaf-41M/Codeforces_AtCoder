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

bool Check(int n, int U, int R, int D, int L, int mask)
{
   if ((1 << 0) & mask)
      U--, L--;
   if ((1 << 1) & mask)
      U--, R--;
   if ((1 << 2) & mask)
      D--, L--;
   if ((1 << 3) & mask)
      D--, R--;

   return (0 <= min(min(L, R), min(D, U)) && max(max(L, R), max(D, U)) <= n - 2);
}
void Solve()
{
   int n, U, R, D, L;
   cin >> n >> U >> R >> D >> L;

   rep(mask, 0, (1 << 4) - 1) {
      if (Check(n, U, R, D, L, mask)) {
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