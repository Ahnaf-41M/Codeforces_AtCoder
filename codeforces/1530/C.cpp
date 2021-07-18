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
   int n, k, s1 = 0, s2 = 0, n2;
   vector<int> v1, v2;
   v1.pb(0), v2.pb(0);

   cin >> n;
   n2 = n;
   k = n - (n / 4);

   int a[n], b[n];
   for (int &x : a) cin >> x;
   for (int &x : b) cin >> x;

   sort(a, a + n);
   sort(b, b + n);

   // for (int &x : a) cout << x << " "; cout << "\n";
   // for (int &x : b) cout << x << " "; cout << "\n";
   rep(i, 0, n - 1) v1.pb(v1.back() + a[i]);
   rep(i, 0, n - 1) v2.pb(v2.back() + b[i]);

   s1 = v1[n] - v1[n - k], s2 = v2[n] - v2[n - k];
   if (s1 >= s2) cout << 0 << "\n";
   else {
      int ans = 0;
      while (s1 < s2) {
         n++, ans++;
         k = n - (n / 4);
         v1.pb(v1.back() + 100);
         if (k <= n2) s2 = v2[n2] - v2[n2 - k];
         s1 = v1[n] - v1[n - k];
      }
      cout << ans << "\n";
   }
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