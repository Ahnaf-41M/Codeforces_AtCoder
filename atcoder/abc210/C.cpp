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
   int n, k, ans = 0;
   cin >> n >> k;

   int ar[n + 1];
   rep(i, 1, n) cin >> ar[i];

   map<int, int> mp;

   rep(i, 1, k) {
      if (!mp[ar[i]]) ans++;
      mp[ar[i]]++;
   }
   int tmp = ans;
   rep(i, k + 1, n) {
      mp[ar[i - k]]--;
      ans -= (!mp[ar[i - k]]);
      if (!mp[ar[i]]) ans++;
      mp[ar[i]]++;
      tmp = max(ans, tmp);
   }
   cout << tmp;
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