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
   int N, M, ans = 0;

   cin >> N >> M;

   int cost[M + 1];
   priority_queue<int> Q;
   cost[0] = 0;

   rep(i, 1, N) {
      int x; cin >> x;
      Q.push(x);
   }
   rep(i, 1, M) cin >> cost[i];

   rep(i, 1, M) {
      if (!Q.empty() && Q.top() >= i) {
         ans += cost[i];
         Q.pop();
      }
   }
   while (!Q.empty()){
      ans += cost[Q.top()];
      Q.pop();
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