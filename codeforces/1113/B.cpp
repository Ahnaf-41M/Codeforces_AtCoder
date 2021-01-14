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

int ans, sum;
set<int> S;

void Check(int d1, int d2, int cur)
{
   for (int kk : S) {
      int tmp = sum;
      if (kk != cur) {
         tmp -= (kk + cur);
         tmp += ((kk * d1) + (cur / d1));
         ans = min(ans, tmp);
         tmp = sum;
         tmp -= (kk + cur);
         tmp += ((kk * d2) + (cur / d2));
         ans = min(ans, tmp);
      }
   }
}
void Solve()
{
   int N;

   cin >> N;

   rep(i, 0, N - 1) {
      int x; cin >> x;
      ans += x;
      S.insert(x);
   }
   sum = ans;

   for (int it : S)
      for (int i = 2; i * i <= it; i++)
         if (it % i == 0)
            Check(i, it / i, it);
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