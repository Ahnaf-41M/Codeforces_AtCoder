#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  pb           push_back
#define  MX           100005
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  gcd(a,b)     __gcd(a,b)
#define  lcm(a,b)     (a*b)/gcd(a,b)
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

void Solve(int tc)
{
   int n, ans = 0;
   string s;
   cin >> n >> s;

   rep(i, 1, n - 1) {
      if (s[i] != s[i - 1]) continue;
      ans++;
      if (i == n - 1) {
         if (s[i - 1] == 'R') s[i] = 'B';
         else if (s[i - 1] == 'B') s[i] = 'G';
         else s[i] = 'R';
      }
      else {
         if (s[i - 1] == s[i + 1]) {
            if (s[i - 1] == 'R') s[i] = 'B';
            else if (s[i - 1] == 'B') s[i] = 'G';
            else s[i] = 'R';
         }
         else if (s[i - 1] == 'R' && s[i + 1] == 'G') s[i] = 'B';
         else if (s[i - 1] == 'R' && s[i + 1] == 'B') s[i] = 'G';
         else if (s[i - 1] == 'G' && s[i + 1] == 'B') s[i] = 'R';
         else if (s[i - 1] == 'G' && s[i + 1] == 'R') s[i] = 'B';
         else if (s[i - 1] == 'B' && s[i + 1] == 'G') s[i] = 'R';
         else if (s[i - 1] == 'B' && s[i + 1] == 'R') s[i] = 'G';
      }
   }
   cout << ans << "\n" << s;
   return;
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