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

signed main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   int n; cin >> n;
   int a[n + 1], two, step = 0;

   rep(i, 1, n) cin >> a[i];

   int cur = 1;

   while (true)
   {
      if (step >= n) {
         cout << -1;
         return 0;
      }
      if (cur == 2) {
         cout << step;
         return 0;
      }
      cur = a[cur];
      step++;
   }

   return 0;
}