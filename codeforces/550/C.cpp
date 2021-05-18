#include "bits/stdc++.h"
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

string s, ans;
bool ok;
int dp[105][8];

bool OK(string ans)
{
   for (char ch : ans) {
      if (ch >= '0' && ch <= '9') continue;
      return false;
   }
   return (!ans.empty());
}
int func(int pos, int mod, string cur)
{
   if (ok) return 1;
   if (OK(cur) && mod == 0) {
      ans = cur; ok = 1;
      return 1;
   }
   if (pos > s.size()) return 0;
   if (dp[pos][mod] != -1) return dp[pos][mod];

   int res = 0;
   res |= func(pos + 1, (mod * 10 + s[pos] - '0') % 8, cur + s[pos]);
   res |= func(pos + 1, mod, cur);

   return dp[pos][mod] = res;
}

void Solve(int tc)
{
   memset(dp, -1, sizeof(dp));
   cin >> s;

   func(0, 0, "");
   if (ok) cout << "YES\n" << ans;
   else cout << "NO\n";
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T = 1;
   // cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}