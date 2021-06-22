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
   int n, k = 1;
   string s, last;
   cin >> n >> s;
   last = s;

   rep(i, 1, n - 1) {
      string pref = s.substr(0, i), suff = s.substr(i), cur;
      // cout << pref << " " << suff << "\n";
      if ((n - i) & 1) reverse(all(pref));
      cur = suff + pref;
      // cout << cur << "\n";
      if (cur < last)
         k = i + 1, last = cur;
   }
   cout << last << "\n" << k << "\n";
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}