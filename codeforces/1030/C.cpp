#include <bits/stdc++.h>
#include <ext/rope>

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
using namespace __gnu_cxx;

int N;
string s, s2 = "";

bool Check()
{
   int sum = 0;
   rep(i, 0, s.size() - 2) {
      int cur = 0, ok = 1, vis = 0;
      sum += (s[i] - '0');
      if (i + 1 < s.size()) {
         rep(j, i + 1, s.size() - 1) {
            cur += (s[j] - '0');
            if (cur == sum) {
               cur = 0;
               vis = 1;
            }
            if (cur > sum) {
               ok = false;
               break;
            }
         }
      }
      if (ok && !cur && vis)
         return true;
   }
   return false;
}
void Remake()
{
   int i = 0, j = N - 1;
   while (s[i] == '0' && i < N)
      i++;
   while (s[j] == '0' && j >= 0)
      j--;

   rep(k, i, j) s2 += s[k];
}
void Solve()
{

   cin >> N >> s;
   Remake();
   s = s2;

   // cout << s << endl;
   if (s.size() == 1) {
      cout << "NO\n";
      return;
   }
   if (s.empty() || Check()) {
      cout << "YES\n";
      return;
   }
   reverse(all(s));
   if (Check())
      cout << "YES\n";
   else
      cout << "NO\n";
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   //int T;
   //cin >> T;

   //while (T--)
   Solve();

   return 0;
}