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

stack<int> adj[55];
deque<int> ind, val;

void Solve()
{
   int n, q;
   cin >> n >> q;

   rep(i, 1, n) {
      int x; cin >> x;
      if (adj[x].empty()) {
         adj[x].push(i);
         val.pb(x);
         ind.pb(i);
      }
   }
   rep(i, 1, q) {
      int x; cin >> x;
      int cur = adj[x].top(); adj[x].pop();
      deque<int> ind2, val2;

      cout << cur << " ";
      while (!ind.empty()) {
         int tmp = ind.front(); ind.pop_front();
         int tmp2 = val.front(); val.pop_front();
         if (tmp >= cur) {
            if (tmp != cur) {
               val2.pb(tmp2);
               ind2.pb(tmp);
            }
            continue;
         }
         ind2.pb(tmp + 1); val2.pb(tmp2);
         adj[tmp2].pop(); adj[tmp2].push(tmp + 1);
      }
      ind2.push_front(1);
      val2.push_front(x);
      adj[x].push(1);
      
      while (!ind2.empty())
         ind.pb(ind2.front()), ind2.pop_front();
      while (!val2.empty())
         val.pb(val2.front()), val2.pop_front();

   }
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   // int T;
   // cin >> T;

   // while (T--)
   Solve();

   return 0;
}