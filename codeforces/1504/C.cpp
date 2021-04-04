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

bool OK(string s)
{
   int cnt = 0;
   rep(i, 0, s.size() - 1) {
      if (s[i] == '(')
         cnt++;
      else
         cnt--;
      if (cnt < 0)
         return false;
   }
   return cnt == 0;
}
void Solve()
{
   int n, one = 0, zero = 0, one2 = 0;
   string s, a = "", b = "";

   cin >> n >> s;

   rep(i, 0, n - 1) zero += (s[i] == '0');
   one = n - zero;
   one2 = n - zero;

   rep(i, 0, n - 1) {
      if (s[i] == '1') {
         if (one <= one2 / 2)
            a += ")", b += ")";
         else
            a += "(", b += "(";
         one--;
      }
      else {
         if (zero & 1)
            a += "(", b += ")";
         else
            a += ")", b += "(";
         zero--;
      }
   }
   if (OK(a) && OK(b))
      cout << "YES\n" << a << "\n" << b << "\n";
   else
      cout << "NO\n";
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