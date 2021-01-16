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
   int n, m;
   cin >> n >> m;
   if (n == 1){
      cout << 1 << " " << 1;
   }
   else if (n == 2) {
      if (m)
         cout << 0 << " " << 0;
      else
         cout << 2 << " " << 2;
   }
   else {
      cout << (m * 2 >= n ? 0 : n - m * 2 ) << " ";
      int ans = 0;
      rep(i, 0, n) {
         int edges = (i * (i - 1)) / 2;
         if (edges >= m) {
            ans = i;
            break;
         }
      }
      cout << n - ans;
   }
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