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

int nCr(int n, int r)
{
   if (r > n)
      return 0;

   int ans = 1;
   r = min(r, n - r);

   rep(i, 0, r - 1) {
      ans *= (n - i);
      ans /= (i + 1);
   }
   return ans;
}
void Solve()
{
   int n, ans = 0;

   cin >> n;

   int cnt[n + 1];
   fill(cnt, cnt + n + 1, 0);

   rep(i, 1, n) {
      int x; cin >> x;
      cnt[x]++;
   }

   rep(x, 1, n) {
      ans += nCr(cnt[x], 3); //(x,x,x) => nC3
      if (x + 2 <= n) {
         ans += cnt[x] * nCr(cnt[x + 1], 1) * nCr(cnt[x + 2], 1); // (x,x+1,x+2)
         ans += cnt[x] * nCr(cnt[x + 2], 2); // (x,x+2,x+2) => nC2
         ans += cnt[x + 2] * nCr(cnt[x], 2); // (x,x,x+2) => nC2
      }
      if (x + 1 <= n) {
         ans += cnt[x] * nCr(cnt[x + 1], 2); // (x,x+1,x+1) => nC2
         ans += cnt[x + 1] * nCr(cnt[x], 2); // (x,x,x+1) => nC2
      }
   }
   cout << ans << "\n";
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