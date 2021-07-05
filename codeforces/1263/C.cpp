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
   int n;
   set<int> ans;

   cin >> n;
   ans.insert(0);
   for (int i = 1; i * i <= n; i++) {
      ans.insert(i);
      ans.insert(n / i);
   }
   cout << ans.size() << "\n";
   for (int x : ans) cout << x << " ";
   cout << "\n";
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