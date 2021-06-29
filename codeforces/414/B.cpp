#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           2005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int dp[MX][MX], n, k;
int mod = 1e9 + 7;

int call(int pos, int curK, int last)
{
   if (pos > n) return 0;
   if (curK == 0) return 1;
   if (dp[pos][curK] != -1) return dp[pos][curK];

   int res = 0;
   for (int j = pos; j <= n; j += pos)
      res = (res + call(j, curK - 1, pos) % mod) % mod;
   return dp[pos][curK] = res;
}
void Solve(int tc)
{
   memset(dp, -1, sizeof(dp));
   cin >> n >> k;

   if (k == 1) cout << n;
   else {
      int ans = 0;
      rep(i, 1, n) ans = (ans + (call(i, k - 1, i)) % mod) % mod;
      cout << ans;
   }
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}