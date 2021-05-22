#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  pb           push_back
#define  MX           100005
#define  int          long long
#define  endl         "\n"
#define  gcd(a,b)     __gcd(a,b)
#define  lcm(a,b)     (a*b)/gcd(a,b)
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

bool cmp(int x, int y)
{
   return abs(x) > abs(y);
}
void Solve(int tc)
{
   int n, pos = 0;
   cin >> n;

   vector<int> v(n);
   for (int& x : v) {
      cin >> x;
      if (x >= 0) pos = 1;
   }
   if (!pos) {
      sort(all(v), greater<int>());
      cout << v[0]*v[1]*v[2]*v[3]*v[4] << endl;
   }
   else {
      sort(all(v), cmp);
      int ans = v[0] * v[1] * v[2] * v[3] * v[4];
      rep(i, 5, n - 1) {
         rep(j, 0, 4) {
            int cur = v[i];
            rep(k, 0, 4) {
               if (j == k) continue;
               cur *= v[k];
            }
            ans = max(cur, ans);
         }
      }
      cout << ans << endl;
   }

   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}