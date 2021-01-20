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

void Solve()
{
   int n;
   string s1, s2;

   cin >> n >> s1 >> s2;

   int r = 0, b = 0;

   rep(i, 0, n - 1) {
      int x = s1[i] - '0';
      int y = s2[i] - '0';

      if (x > y)
         r++;
      else if (y > x)
         b++;
   }
   if (r == b)
      cout << "EQUAL\n";
   else if (r > b)
      cout << "RED\n";
   else
      cout << "BLUE\n";
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