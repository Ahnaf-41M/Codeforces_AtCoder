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
   int x = 0, y = 0, px, py;
   string s;

   cin >> px >> py >> s;

   rep(i, 0, s.size() - 1) {
      if (s[i] == 'U') {
         if (py > y)
            y++;
      }
      else if (s[i] == 'D') {
         if (py < y)
            y--;
      }
      else if (s[i] == 'R') {
         if (px > x)
            x++;
      }
      else {
         if (px < x)
            x--;
      }
   }
   if (x == px && y == py)
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

   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}