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
   priority_queue<int, vector<int>, greater<int> > up, right;

   cin >> n;
   int cost[n];
   rep(i, 0, n - 1) cin >> cost[i];

   int ans = 1e18, last = 0;

   rep(i, 0, n - 1) {
      if (i & 1)
         right.push(cost[i]);
      else
         up.push(cost[i]);
      last += cost[i];
      if (i) {
         int frUP = (n - (int)up.size()) * (up.top());
         int frRT = (n - (int)right.size()) * (right.top());
         ans = min(ans, last + frUP + frRT);
      }
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