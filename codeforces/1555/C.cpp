#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int ar[3][MX];
void Solve(int tc)
{
   int n;
   cin >> n;

   int up[n + 2] = {}, down[n + 1] = {};

   rep(i, 1, n) cin >> up[i];
   rep(i, 1, n) cin >> down[i];

   rep(i, 1, n) down[i] += down[i - 1];
   irep(i, n, 1) up[i] += up[i + 1];

   int ans = 1e18;
   rep(i, 1, n) {
      int mx = max(down[i - 1], up[i + 1]);
      ans = min(mx, ans);
   }
   cout << ans << "\n";
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}