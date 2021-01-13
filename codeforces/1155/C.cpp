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
   int N, M;
   cin >> N >> M;
   int x[N + 1], p[M + 1];

   rep(i, 1, N) cin >> x[i];
   rep(i, 1, M) cin >> p[i];

   int Gcd = 0;
   rep(i, 1, N - 1) {
      Gcd = gcd(Gcd, x[i + 1] - x[i]);
   }
   rep(i, 1, M) {
      if (Gcd % p[i]==0) {
         cout << "YES\n";
         cout << x[1] << " " << i;
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

   //int T;
   //cin >> T;

   //while (T--)
   Solve();

   return 0;
}