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
   int n, cur = 0;
   vector<PII> ans;

   cin >> n;
   int a[n], b[n];
   for (int &x : a) cin >> x;
   for (int &x : b) cin >> x;

   rep(i, 0, n - 1) {
      if (a[i] == b[i]) continue;
      // cur+=(a[i]-b[i]);
      rep(j, 0, n - 1) {
         if (i == j) continue;
         while (a[i] < b[i] && a[j] > b[j]) {
            ans.pb({j + 1, i + 1});
            a[i]++, a[j]--;
         }
         while (a[i] > b[i] && a[j] < b[j]) {
            ans.pb({i + 1, j + 1});
            a[i]--, a[j]++;
         }
      }
   }
   rep(i, 0, n - 1) {
      if (a[i] != b[i]) {
         cout << "-1\n";
         return;
      }
   }
   cout << ans.size() << "\n";
   for (auto it : ans) cout << it.ff << " " << it.ss << "\n";

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