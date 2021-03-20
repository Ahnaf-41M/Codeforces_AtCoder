#include<bits/stdc++.h>
#define  MX      20000005
#define  ff      first
#define  ss      second
#define  pb      push_back
#define  int     long long
#define  PII     pair<int,int>
#define  all(v)  v.begin(),v.end()
using namespace std;

int nxt[MX + 5];
int c, d, x;

void Sieve()
{
   nxt[1] = 1;
   for (int i = 2; i <= MX; i++) {
      if (!nxt[i]) {
         nxt[i] = i;
         for (int j = i * i; j <= MX; j += i)
            nxt[j] = i;
      }
   }
}
int Cnt_factors(int m)
{
   int res = 0;
   while (m > 1) {
      int cur = nxt[m];
      while (m % cur == 0)
         m /= cur;
      res++;
   }
   return res;
}
signed main()
{
   ios::sync_with_stdio(0);
   cin.tie(NULL);
   cout.tie(NULL);

   /*Number of pairs(a, b) with gcd = g and lcm = l is 2^n. Where n is the
     number of prime factors of l/g.
     Here lcm(a,b)/gcd(a,b) = (x/gcd(a,b) + d)/c. Means gcd(a,b) must be
     a divisor of x. Thus traversing the divisors of x we will get the value
     lcm(a, b)/gcd(a, b) and add 2^n to the answer.(Here n is the number of
     factors of lcm(a, b)/gcd(a, b)) */

   Sieve();

   int t;
   cin >> t;

   while ( t-- ) {
      int ans = 0;
      cin >> c >> d >> x;

      for (int i = 1; i * i <= x; i++) {
         if (x % i == 0) {
            int d1 = i, d2 = x / i;
            int n;
            if ((d1 + d) % c == 0) { //(x/gcd(a,b) + d) must be divisible by c
               n = Cnt_factors((d1 + d) / c);
               ans += (1 << n);
            }
            if (d1 != d2 && (d2 + d) % c == 0) {
               n = Cnt_factors((d2 + d) / c);
               ans += (1 << n);
            }
         }
      }
      cout << ans << endl;
   }

   return 0;
}