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
   map<int, int> mp;
   cin >> n;

   if (n < 10)
      cout << n << endl;
   else {
      int cur = 9, ok = 1;
      while (n > 0 && cur > 0) {
         if (n >= cur) {
            if (mp[cur])
               ok = false;
            mp[cur]++;
            n -= cur; cur--;
         }
         else {
            if (mp[n])
               ok = false;
            mp[n]++; n = 0;
         }
      }
      if (ok&&!n) {
         for (auto it : mp)
            cout << it.first;
         cout << endl;
      }
      else
         cout << -1 << endl;
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