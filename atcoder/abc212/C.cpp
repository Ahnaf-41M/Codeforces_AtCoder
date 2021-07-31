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

void Solve(int tc)
{
   int n, m;
   cin >> n >> m;

   vector<int> v1(n), v2(m);
   for (int &x : v1) cin >> x;
   for (int &x : v2) cin >> x;

   sort(all(v1));
   sort(all(v2));

   int ans = 1e18;
   for (int x : v1) {
      int lb = upper_bound(all(v2), x) - v2.begin();
      int ub = lb;
      if (lb) ub--;
      if (lb == m) lb--;
      ans = min({ans, abs(x - v2[lb]), abs(x - v2[ub])});
   }
   cout << ans;

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