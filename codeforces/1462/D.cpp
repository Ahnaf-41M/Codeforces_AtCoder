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
   int n, sum = 0; cin >> n;
   int a[n + 1];

   rep(i, 1, n) cin >> a[i], sum += a[i];

   rep(k, 0, n - 1) {
      int j = 0, i = 1,segs = n - k;

      if (sum % (n - k) == 0) {
         int cursum = sum / (n - k);
         while (i <= n) {
            int tmps = 0;
            while (i <= n && tmps < cursum) {
               tmps += a[i];
               i++;
            }
            if (tmps != cursum)
               break;
            j++;
         }
      }
      if (j == segs) {
         cout << k << endl;
         return;
      }

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