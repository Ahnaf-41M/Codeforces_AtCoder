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
   int n, ans = 0;
   cin >> n;

   int ar[n];
   for (int &x : ar) cin >> x;

   rep(i, 0, n - 1) {
      int mex = 0, zero = 0;
      set<int> s;
      rep(j, i, n - 1) {
         zero += (ar[j] == 0);
         if (ar[j] || s.find(0) == s.end()) s.insert(ar[j]);

         for (int x : s) if (mex == x) mex++;
         ans += max(2 * zero - 1 + mex, j - i + 1 + zero);
      }
   }
   cout << ans << "\n";
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