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

   int a[N + 1], b[M + 1];

   rep(i, 1, N) cin >> a[i];
   rep(i, 1, M) cin >> b[i];
   sort(a + 1, a + N + 1);

   int gg = 0;

   rep(i, 2, N) gg = gcd(gg, a[i] - a[1]);

   rep(i, 1, M) {
      cout << gcd(gg, b[i] + a[1]) << " ";
   }
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