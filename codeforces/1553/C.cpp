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

string s;
int n;
int Check1()
{
   int a = 0, b = 0, left = 5;

   b = 0;
   rep(i, 0, 9) {
      if (i & 1) {
         b += (s[i] == '1');
         left--;
      }
      else a += (s[i] != '0');
      if (a > b + left) return i + 1;
   }
   return 10;

}
int Check2()
{
   int a = 0, b = 0, left = 5;
   a = 0;
   rep(i, 0, 9) {
      if (i & 1) b += (s[i] != '0');
      else {
         a += (s[i] == '1');
         left--;
      }
      if (a + left < b) return i + 1;
   }
   return 10;
}
void Solve(int tc)
{
   cin >> s;
   int ans = Check1();
   ans = min(ans, Check2());
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