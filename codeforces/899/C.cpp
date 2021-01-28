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
   int n, s1 = -1, s2 = 0;
   vector<int> v1, v2;

   cin >> n;
   int i = n;

   while (i > 0) {
      while (s1 <= s2 && i >= 1) {
         // cout << i << " ";
         s1 = (s1 == -1 ? 0 : s1);
         s1 += i;
         v1.pb(i);
         i--;
      }
      // cout << endl;
      while (s2 <= s1 && i >= 1) {
         // cout << i << " ";
         s2 += i;
         v2.pb(i);
         i--;
      }
      // cout << endl;
   }
   cout << abs(s1 - s2) << endl;
   cout << v1.size() << " ";
   for (int x : v1) cout << x << " ";

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