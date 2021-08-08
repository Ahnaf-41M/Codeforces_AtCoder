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

map<PII, PII> mp;
vector<PII> v1, v2;

bool cmp(PII x, PII y)
{
   return x.ss < y.ss;
}
void Solve(int tc)
{
   int n, h, w;
   cin >> h >> w >> n;
   rep(i, 1, n) {
      int x, y;
      cin >> x >> y;
      v1.pb({x, y}), v2.pb({x, y});
   }
   sort(all(v1));

   int cur = 0;
   rep(i, 0, n - 1) {
      if (!i) cur += v1[i].ff - 1;
      else if (v1[i].ff != v1[i - 1].ff) cur += v1[i].ff - v1[i - 1].ff - 1;
      mp[ {v1[i].ff, v1[i].ss}] = {v1[i].ff - cur, v1[i].ss};
   }

   sort(all(v1), cmp);
   cur = 0;
   rep(i, 0, n - 1) {
      if (!i) cur += v1[i].ss - 1;
      else if (v1[i].ss != v1[i - 1].ss) cur += v1[i].ss - v1[i - 1].ss - 1;

      // mp[ {v1[i].ff, v1[i].ss}] = {v1[i].ff, v1[i].ss - cur};
      mp[ {v1[i].ff, v1[i].ss}].ss -= cur;
   }
   for (auto it : v2) {
      auto it2 = mp[it];
      cout << it2.ff << " " << it2.ss << "\n";
   }


}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}