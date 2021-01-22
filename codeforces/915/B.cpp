#pragma GCC optimize("unroll-loops")
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
   int N, pos, L, R, ans = 0;
   cin >> N >> pos >> L >> R;

   if (L >= pos) {
      ans += (L - pos);
      if (L != 1)
         ans++;
      if (R != N)
         ans += abs(L - R) + 1;
   }
   else if (R <= pos) {
      ans += (pos - R);
      if (R != N)
         ans++;
      if (L != 1)
         ans += abs(R - L) + 1;
   }
   else {
      if (L == 1 && R == N)
         ans = 0;
      else if (L == 1)
         ans = abs(R - pos) + 1;
      else if (R == N)
         ans = abs(L - pos) + 1;
      else {
         ans = abs(pos - L) + abs(R - L) + 2;
         ans = min(ans, abs(pos - R) + abs(R - L) + 2);
      }
   }
   cout << ans;
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