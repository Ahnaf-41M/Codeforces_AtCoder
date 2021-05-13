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

int zero, one, a, b;
string s;
bool OK(string s)
{
   int n = s.size();
   rep(i, 0, n - 1) {
      if (s[i] != s[n - i - 1] || s[i] == '?')
         return false;
   }
   return true;
}
void Solve(int tc)
{
   cin >> zero >> one >> s;

   a = zero, b = one;
   int n = s.size();

   rep(i, 0, n - 1) {
      if (s[i] == '?' && s[n - i - 1] != '?')
         s[i] = s[n - i - 1]; //making all '?0','0?', '1?', '?1' => '00','00','11','11'
      zero -= (s[i] == '0');
      one -= (s[i] == '1');
   }
   rep(i, 0, n - 1) {
      if (s[i] == '?') {
         if (i == n - i - 1) {
            if (a & 1) s[i] = '0', zero--;
            else s[i] = '1', one--;
         }
         else {
            if (zero > 1) s[i] = s[n - i - 1] = '0', zero -= 2;
            else s[i] = s[n - i - 1] = '1', one -= 2;
         }
      }
   }
   if (OK(s) && !zero && !one) cout << s << "\n";
   else cout << "-1\n";
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