#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  pb           push_back
#define  MX           100005
#define  int          long long
#define  endl         "\n"
#define  gcd(a,b)     __gcd(a,b)
#define  lcm(a,b)     (a*b)/gcd(a,b)
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int dp[MX];
int ar[MX], n, ans;

int call(int pos, int last)
{
   if (pos > n) return 0;
   if (ar[pos] <= last) return 0;
   if (dp[pos] != -1) return dp[pos];

   int r = 0;
   r = 1 + call(pos + 1, ar[pos]);
   return dp[pos] = r;
}
void Solve(int tc)
{
   memset(dp, -1, sizeof(dp));
   cin >> n;
   rep(i, 1, n) cin >> ar[i];

   rep(i, 1, n) ans = max (ans, call(i, -1e18));
   cout << ans;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}