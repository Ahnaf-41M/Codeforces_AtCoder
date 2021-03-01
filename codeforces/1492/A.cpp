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
   int a[4], ans;

   rep(i, 0, 3) cin >> a[i];
   ans = a[1] - (a[0] % a[1]);
   ans = min(ans, min(a[2] - (a[0] % a[2]), a[3] - (a[0] % a[3])));
   if (a[0] % a[1] == 0 || a[0] % a[2] == 0 || a[0] % a[3] == 0)
      ans = 0;
   cout << ans << endl;
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