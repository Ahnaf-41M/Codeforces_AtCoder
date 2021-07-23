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

vector<int> adj[2 * MX];
int ar[2 * MX], n, k, ans[2 * MX];
void Solve(int tc)
{
   map<int, int> mp;
   int n2;

   cin >> n >> k;
   n2 = n;
   rep(i, 1, n) {
      cin >> ar[i];
      ans[i] = 0;
      adj[ar[i]].pb(i);
      mp[ar[i]]++;
   }
   rep(i, 1, n) {
      int x = ar[i];
      if (mp[x] >= k) {
         n2 -= mp[x];
         mp.erase(x);
         int cur = 1;
         while (cur <= k) {
            ans[adj[x].back()] = cur++;
            adj[x].pop_back();
         }
         while (!adj[x].empty()) adj[x].pop_back();
      }
   }

   int cur = k;
   for (auto it : mp) {
      int x = it.ff;
      // if (n2 < k) break;
      while (!adj[x].empty() && n2 >= cur) {
         ans[adj[x].back()] = cur--;
         adj[x].pop_back();
         cur = (!cur ? k : cur);
         n2--;
      }
   }
   rep(i, 1, n) cout << ans[i] << " ";
   rep(i, 1, n) while (!adj[ar[i]].empty()) adj[ar[i]].pop_back();
   cout << "\n";
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