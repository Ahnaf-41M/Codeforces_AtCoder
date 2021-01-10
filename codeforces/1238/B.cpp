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
   int n, r;

   cin >> n >> r;

   int ar[n];

   rep(i, 0, n - 1) cin >> ar[i];
   sort(ar, ar + n);

   int cur = 0, ans = 0, done = 0;
   int i = n - 1;

   while (i >= 0) {
      if (ar[i] - ans * r > 0)
         ans++;
      while (ar[i] == ar[i - 1])
         i--;
      i--;
   }

   cout << ans << endl;
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