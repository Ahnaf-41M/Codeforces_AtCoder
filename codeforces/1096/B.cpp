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

int n;
string s;
const int mod = 998244353;

pair<int, int> Count()
{
   int pre = 0, pos = 0;
   int i = 0;
   char ch = s[0];
   while (s[i] == ch && i + 1 < n)
      pre++, i++;
   i = n - 1;
   ch = s[n - 1];
   while (s[i] == ch && i - 1 >= 0)
      i--, pos++;
   return {pre, pos};
}
void Solve()
{
   cin >> n >> s;

   pair<int, int> tot = Count();

   // cout << tot.first << " " << tot.second << endl;
   if (s[0] == s[n - 1]) {
      int ans = (tot.first + 1) * (1 + tot.second);
      ans %= mod;
      cout << ans << endl;
   }
   else {
      int ans = tot.first + tot.second + 1;
      cout << ans << endl;
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