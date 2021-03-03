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
   int n, U, R, D, L;
   int U1, R1, D1, L1;

   cin >> n >> U >> R >> D >> L;

   U1 = U, R1 = R, D1 = D, L1 = L;

   if (U == n) L1--, R1--;
   if (D == n) L1--, R1--;
   if (R == n) U1--, D1--;
   if (L == n) U1--, D1--;

   if (U == n - 1) {
      if (L1 > R1) L1--;
      else R1--;
   }
   if (D == n - 1) {
      if (L1 > R1) L1--;
      else R1--;
   }
   if (R == n - 1) {
      if (U1 > D1) U1--;
      else D1--;
   }
   if (L == n - 1) {
      if (U1 > D1) U1--;
      else D1--;
   }

   if (L1 >= 0 && R1 >= 0 && D1 >= 0 && U1 >= 0)
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