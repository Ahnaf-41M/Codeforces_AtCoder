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

double PreSum[6000], ar[6000];

void Solve()
{
   int N, K;
   double ans = 0;

   cin >> N >> K;

   rep(i, 1, N) {
      cin >> ar[i];
      PreSum[i] = PreSum[i - 1] + ar[i];
   }
   while (K <= N) {
      rep(i, K, N) {
         double cur = (PreSum[i] - PreSum[i - K]) / (double)K;
         ans = max(ans, cur);
      }
      K++;
   }
   cout << setprecision(15) << ans;
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