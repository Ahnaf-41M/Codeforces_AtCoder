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

int MOD = 1e9 + 7;

void Solve(int tc)
{
   int ans = 1, n;
   cin >> n;

   vector<int> v(n);
   for (int &x : v) cin >> x;
   sort(all(v));

   rep(i, 0, n - 1) {
      ans = ((ans % MOD) * ((v[i] - i) % MOD)) % MOD;
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