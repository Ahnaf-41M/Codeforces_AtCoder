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
   int str, exp, intl, ans = 0;

   cin >> str >> intl >> exp;

   int low = 0, high = exp;

   while (low <= high) {
      int mid = (low + high) >> 1;
      if (intl + mid < str + exp - mid) {
         ans = max(ans, mid);
         low = mid + 1;
      }
      else {
         // ans = max(ans, mid);
         high = mid - 1;
      }
   }
   if (str + exp > intl)
      ans++;
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