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
   int n, k;
   vector<int> v;
   stack<int> ans;
   map<int, int> done;

   cin >> n >> k;

   rep(i, 1, k) v.pb(i);
   n -= k;
   rep(i, 1, n) v.pb(k - i);

   irep(i, (int)v.size() - 1, 0) {
      if (!done[v[i]]) {
         ans.push(v[i]);
         done[v[i]] = 1;
      }
   }
   while (!ans.empty())
      cout << ans.top() << " ", ans.pop();
   cout << "\n";
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