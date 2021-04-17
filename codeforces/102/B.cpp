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

int NOD(int x)
{
   int c = 0;
   while (x)
      x /= 10, c++;
   return c;
}
int SOD(int x)
{
   int c = 0;
   while (x)
      c += x % 10, x /= 10;
   return c;
}
void Solve()
{
   string s;
   int n = 0, cnt = 0;
   cin >> s;

   for (char ch : s)
      n += (ch - '0');

   if (s.size() == 1) {
      cout << 0;
      return;
   }
   cnt++;
   while (NOD(n) > 1)
      cnt++, n = SOD(n);

   cout << cnt;
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