#include<bits/stdc++.h>
#define  MX      100005
#define  ff      first
#define  ss      second
#define  pb      push_back
#define  int     long long
#define  PII     pair<int,int>
#define  all(v)  v.begin(),v.end()
using namespace std;

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int t;
   cin >> t;

   while ( t-- ) {
      int n, ans = 0;
      vector<PII> v;
      vector<int> tm;

      cin >> n;
      v.pb({0, 0});
      for (int i = 1; i <= n; i++) {
         int x, y;
         cin >> x >> y;
         v.pb({x, y});
      }
      tm.pb(0);
      for (int i = 1; i <= n; i++) {
         int x; cin >> x;
         tm.pb(x);
      }

      for (int i = 1; i <= n; i++) {
         ans += (v[i].ff - v[i - 1].ss + tm[i]);
         int x = v[i].ss - ans;
         int dif = (int)(v[i].ss - v[i].ff + 1) / 2;
         // if (x < dif)
         if (i != n)
            ans += dif;
         if (ans < v[i].ss && i != n)
            ans = v[i].ss;
      }
      // ans += (v[n].ss - v[n].ff);
      cout << ans << endl;
   }
   return 0;
}