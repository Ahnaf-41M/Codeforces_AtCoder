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
   string s;
   int n, zero = 0, one = 0, ans = 0;

   cin >> s;
   n = s.size();

   for (char ch : s) {
      if (ch == '?') {
         one++, zero++;
         ans += max(one, zero);
      }
      else if (ch == '0') {
         zero++, one = 0;
         ans += zero;
      }
      else {
         one++, zero = 0;
         ans += one;
      }
      swap(one, zero);
   }
   cout << ans << "\n";
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