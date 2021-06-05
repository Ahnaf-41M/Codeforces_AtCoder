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
   int n, res = 0;
   vector<int> v, even, odd;

   cin >> n;
   rep(i, 1, n) {
      int x; cin >> x;
      if (x & 1) odd.pb(x);
      else even.pb(x);
   }
   for (int x : even) v.pb(x);
   for (int x : odd) v.pb(x);

   rep(i, 0, n - 1) {
      rep(j, i + 1, n - 1) {
         if (gcd(v[i], 2 * v[j]) > 1)
            res++;
      }
   }
   cout << res << endl;
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