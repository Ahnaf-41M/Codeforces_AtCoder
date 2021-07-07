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
   int a, b;
   cin >> a >> b;

   int mx = max(a, b), mn = min(a, b);

   if (!a || !b) cout << mx << " 0\n";
   else if (a == b) cout << "0 0\n";
   else {
      int ans = mx - mn, moves = min(min(mn, ans - (mx % ans)), mx % ans);
      if (ans == __gcd(a, b)) cout << ans << " 0\n";
      else cout << ans << " " << moves << "\n";
   }
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