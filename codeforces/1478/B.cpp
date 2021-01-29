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
int n, d;

void Solve()
{
   cin >> n >> d;

   int a[n];
   int done[105] = {0}, mx = d * 10;
   done[0] = 1;

   rep(i, 0, d - 1) {
      int cur = (i * 10) + d;
      rep(j, 0, mx) {
         if (!done[j])
            continue;
         for (int k = j; k <= mx; k += cur)
            done[k] = 1;
      }
   }

   rep(i, 0, n - 1) {
      cin >> a[i];
      if (a[i] >= mx || done[a[i]])
         cout << "YES\n";
      else
         cout << "NO\n";
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