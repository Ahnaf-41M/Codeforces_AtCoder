#include "bits/stdc++.h"
#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            100005
#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)
using namespace std;

bool OK(string s)
{
   int i = 0;
   char cur = s[0];
   while (i < s.size() && s[i] == cur)
      i++;
   if (i == s.size()) return true;
   cur = s[i];
   while (i < s.size() && s[i] == cur)
      i++;
   return i == (int)s.size();
}
void Solve()
{
   string s;
   cin >> s;

   if (OK(s)) cout << "0\n";
   else {
      int tot_0 = 0, tot_1 = 0, cur_0 = 0, cur_1 = 0;
      int ans;
      for (char ch : s) {
         tot_0 += (ch == '0');
         tot_1 += (ch == '1');
      }
      ans = min(tot_0, tot_1);

      for (char ch : s) {
         cur_0 += (ch == '0');
         cur_1 += (ch == '1');
         ans = min(ans, cur_0 + tot_1 - cur_1); //make 111...000
         ans = min(ans, cur_1 + tot_0 - cur_0); //make 000...111
      }
      cout << ans << endl;
   }
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}