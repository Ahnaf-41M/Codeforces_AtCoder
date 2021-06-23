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

int n;
string s1, s2;
deque<int> a1, b1, a2, b2;
vector<PII> ans;

void Solve(int tc)
{
   cin >> n >> s1 >> s2;
   rep(i, 0, n - 1) {
      if (s1[i] == s2[i]) continue;
      if (s1[i] == 'a') a1.pb(i + 1), b2.pb(i + 1);
      else a2.pb(i + 1), b1.pb(i + 1);
   }

   if ((a1.size() + b1.size()) & 1) cout << "-1";
   else {
      while (!a1.empty()) {
         if (a1.front() == b2.back()) break;
         ans.pb({a1.front(), b2.back()});
         a1.pop_front(), a1.pop_back();
         b2.pop_back(), b2.pop_front();
      }
      while (!b1.empty()) {
         if (b1.front() == a2.back()) break;
         ans.pb({b1.front(), a2.back()});
         b1.pop_front(), b1.pop_back();
         a2.pop_back(), a2.pop_front();
      }
      if (!a1.empty()) {
         ans.pb({a1.front(), b2.front()});
         ans.pb({b1.front(), b2.front()});
      }
      cout << ans.size() << "\n";
      for (auto it : ans) cout << it.ff << " " << it.ss << "\n";
   }

}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}