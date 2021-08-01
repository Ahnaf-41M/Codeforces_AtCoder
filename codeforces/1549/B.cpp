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
   string s1, s2;
   cin >> n >> s1 >> s2;

   int ans = 0;

   rep(i, 0, n - 1) {
      if (s1[i] == '1') {
         if (i - 1 >= 0 && s2[i - 1] == '1') {
            s2[i - 1] = '0';
            ans++;
         }
         else if (i + 1 < n && s2[i + 1] == '1') {
            s2[i + 1] = '0';
            ans++;
         }
      }
      else if (s1[i] == '0' && s2[i] == '1') {
         s2[i] = '0';
         ans++;
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