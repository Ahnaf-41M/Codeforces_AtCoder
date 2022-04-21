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
   int n, cur = 0, a = 0, b = 0, ans = 0;
   map<int, int> mp, mp2;

   cin >> n;

   int ar[n];
   rep(i, 0, n - 1) {
      cin >> ar[i];
      cur += ar[i];
      mp[cur] = i + 1;
   }
   cur = 0;
   irep(i, n - 1, 0) {
      cur += ar[i];
      mp2[cur] = i + 1;
   }

   // cur = 0;
   rep(i, 0, n - 1) {
      a += ar[i];
      mp2.erase(cur);
      auto it = mp2.lower_bound(a);
      // cout << it->ff << " " << it->ss << " " << a << "\n";
      if (it->ff == a) {
         ans = max(ans, i + 1 + n - it->ss + 1);
      }
      cur -= ar[i];
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