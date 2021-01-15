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

priority_queue<int> adj[2 * MX], Q;
int N, M;

void Solve()
{
   int ans = 0;
   cin >> N;

   rep(i, 1, N) {
      cin >> M;
      while (M--) {
         int sal; cin >> sal;
         adj[i].push(sal);
         Q.push(sal);
      }
   }

   rep(i, 1, N) {
      if (adj[i].top() < Q.top()) {
         int diff = Q.top() - adj[i].top();
         ans += diff * adj[i].size();
      }
   }
   cout << ans;
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