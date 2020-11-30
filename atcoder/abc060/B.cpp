#include <bits/stdc++.h>
#include <ext/rope>

#define  pb   push_back
#define  int  long long
#define  endl "\n"
#define  MX   100005

#define  W(t)            while(t--)
#define  all(v)          v.begin(),v.end()
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  rep(i,a,b)      for(int i = a; i <= b; i++)

using namespace std;
using namespace __gnu_cxx;

int found[150];

void solve()
{
   int a, b, c, i = 1;
   cin >> a >> b >> c;
   int cur = a;

   while (true)
   {
      int mod = cur % b;
      if (found[mod]) {
         cout << "NO\n";
         return;
      }
      if (mod == c) {
         cout << "YES\n";
         return;
      }
      found[mod]++;
      i++; cur = a * i;
   }
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   solve();

   return 0;
}