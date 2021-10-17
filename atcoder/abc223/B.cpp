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
   string s, mn, mx;
   cin >> s;
   mn = s, mx = s;
   int n = s.size();
   rep(i, 0, (int)s.size() - 1) {
      string cur = s.substr(i + 1, n) + s.substr(0, i + 1);
      // cout << cur << "\n";
      mn = min(mn, cur);
      mx = max(mx, cur);
   }
   cout << mn << "\n" << mx;
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