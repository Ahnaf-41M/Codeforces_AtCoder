#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  pb           push_back
#define  MX           100005
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  gcd(a,b)     __gcd(a,b)
#define  lcm(a,b)     (a*b)/gcd(a,b)
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

void Solve(int tc)
{
   int n, d, ans = 0;
   vector<int> pref, v2;
   vector<PII> v1;

   cin >> n >> d;

   rep(i, 1, n) {
      int x, y;
      cin >> x >> y;
      v1.pb({x, y});
   }
   sort(all(v1));

   for (auto it : v1) {
      if (pref.empty()) pref.pb(it.ss);
      else pref.pb(pref.back() + it.ss);
      v2.pb(it.ff);
   }
   rep(i, 0, n - 1) {
      int x = v1[i].ff - d + 1;
      int y = v1[i].ff + d - 1;
      int l = lower_bound(all(v2), x) - v2.begin();
      int r = upper_bound(all(v2), y) - v2.begin();
      // cout << l << " " << r << endl;

      int LL = pref[r - 1];
      if (i) LL -= pref[i - 1];
      int RR = pref[i];
      if (l) RR -= pref[l - 1];
      ans = max(ans, max(LL, RR));

   }
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