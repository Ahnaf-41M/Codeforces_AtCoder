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
   int a, b, k, ans = 0;
   map<int, int> mp1, mp2, noteq;
   map<pair<int, int>, int> pp;

   cin >> a >> b >> k;

   int k2 = k;
   int v1[k], v2[k];

   rep(i, 0, k - 1) cin >> v1[i], mp1[v1[i]]++;
   rep(i, 0, k - 1) cin >> v2[i], mp2[v2[i]]++;

   rep(i, 0, k - 1) {
      pp[ {v1[i], v2[i]}]++;
   }

   rep(i, 0, k - 2) {
      int x = k2 - mp1[v1[i]];
      int y = k2 - mp2[v2[i]];
      int mx = mp1[v1[i]] + mp2[v2[i]] - 1;
      // if(v1[i]==v2[i])
      //    mx++;

      ans += (k2 - mx);
      k2--;
      mp1[v1[i]]--;
      mp2[v2[i]]--;
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