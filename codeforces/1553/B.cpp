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
   string s, t;
   int n, m;

   cin >> s >> t;
   n = s.size(), m = t.size();

   vector<int> pos;
   rep(i, 0, n - 1) if (s[i] == t[0]) pos.pb(i);

   for (int cur : pos) {
      int i = cur, j = 0;

      while (i < n && j < m && s[i] == t[j]) i++, j++;

      rep(k, cur, i - 1) {
         int l = cur;
         string tmp;

         j = 0;
         while (l <= k && j < m && s[l] == t[j]) tmp.pb(s[l]), l++, j++;
         l -= 2;
         while (l >= 0 && s[l] == t[j] && j < m) tmp.pb(s[l]), l--, j++;

         if (tmp == t) {
            cout << "YES\n";
            return;
         }
      }
   }
   cout << "NO\n";
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