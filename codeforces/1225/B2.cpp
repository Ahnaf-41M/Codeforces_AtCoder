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
   int n, k, d;
   map<int, int> mp;

   cin >> n >> k >> d;
   int ar[n + 1];

   rep(i, 1, n) cin >> ar[i];

   rep(i, 1, d) mp[ar[i]]++;
   int cur_len = mp.size(), ans = mp.size();

   rep(i, d + 1, n) {
      mp[ar[i - d]]--;
      if (!mp[ar[i - d]])
         cur_len--;
      if (!mp[ar[i]])
         cur_len++;
      mp[ar[i]]++;
      ans = min(ans, cur_len);
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