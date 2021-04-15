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
   int n, k, mex = 0, ans, mx = 0;
   map<int, int> mp;

   cin >> n >> k;
   ans = n;
   rep(i, 1, n) {
      int x; cin >> x;
      mp[x]++; mx = max(mx, x);
   }
   rep(i, 0, n) if (!mp[i]) {
      mex = i;
      break;
   }

   if (mex > mx) ans += k;
   else if (k) {
      int add = (mx + mex + 1) / 2;
      if (!mp[add])
         ans++;
   }
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