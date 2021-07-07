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
   int n, sum = 0, av = 0, ans = 0;
   cin >> n;

   vector<int> v(n), suf(n);
   for (int &x : v) {
      cin >> x;
      sum += x;
   }
   sort(all(v));
   av = ceil(1.0 * sum / n);

   int delt = 0;
   rep(i, 0, n - 1) {
      if (av >= v[n - 1]) break;
      if (v[i] >= av) break;
      delt += abs(v[i] - av);
      v[i] = av;
   }
   irep(i, n - 1, 0) {
      if (!delt) break;
      // if (av >= v[n - 1]) break;
      // if (v[i] <= av) break;
      int mn = min(v[i] - av, delt);
      v[i] -= mn;
      delt -= mn;
   }
   rep(i, 0, n - 1) {
      if (!delt) break;
      v[i]++, delt--;
   }
   // cout << av << "\n";
   // for (int x : v) cout << x << " ";
   sort(all(v));
   irep(i, n - 1, 0) {
      if (i == n - 1) suf[i] = v[i];
      else suf[i] = suf[i + 1] + v[i];
   }
   // for (int x : suf) cout << x << " ";
   rep(i, 0, n - 2) ans += abs(((n - i - 1) * v[i]) - suf[i + 1]);
   cout << ans << "\n";

}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}