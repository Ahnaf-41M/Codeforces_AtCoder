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
   int N, X, res = 0;

   cin >> N >> X;

   int ar[N], seq[N];

   rep(i, 0, N - 1) {
      cin >> ar[i];
      seq[i] = ar[i];
      res += ar[i];
   }

   rep(i, 0, N - 1) {
      if (seq[i] % X == 0) {
         res += ar[i];
         seq[i] /= X;
      }
      else
         break;
      if (i == N - 1)
         i = -1;
   }
   cout << res << endl;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int tt;
   cin >> tt;

   while (tt--)
      Solve();

   return 0;
}