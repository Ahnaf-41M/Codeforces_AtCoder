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
   int N;
   cin >> N;

   int a[N], b[N];

   rep(i, 0, N - 1) cin >> a[i] >> b[i];

   sort(a, a + N);
   sort(b, b + N);

   if (N & 1)
      cout << 1 << endl;
   else {
      int ans = a[N / 2] - a[N / 2 - 1] + 1;
      ans *= (b[N / 2] - b[N / 2 - 1] + 1);
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