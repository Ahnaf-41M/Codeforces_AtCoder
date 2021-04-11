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
   int n, k; cin >> n >> k;

   if ((n+1) / 2 > k) {
      int cur = n, cnt = 1;
      vector<int> v1, v2;
      while (k-- > 0) {
         v1.pb(cnt);
         v1.pb(cur); cnt++, cur--;
         // v1.pb(cnt);
      }
      while (v1.size() < n && cnt <= n) {
         v1.pb(cnt), cnt++;
      }
      for (int x : v1)
         cout << x << " ";
      cout << endl;
   }
   else
      cout << -1 << endl;
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