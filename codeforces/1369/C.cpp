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
   int N, K, ans = 0;
   vector<int> v;
   priority_queue<int, vector<int>, greater<int> > W;
   deque<int> Q, Q2, W2;

   cin >> N >> K;

   rep(i, 1, N) {
      int x; cin >> x;
      v.pb(x);
   }

   sort(all(v));
   for (int x : v)
      Q.pb(x);

   rep(i, 1, K) {
      int x; cin >> x;
      W.push(x);
   }

   while (!W.empty() && W.top() == 1) {
      ans += 2 * Q.back();
      Q.pop_back();
      W.pop();
      K--;
   }

   while (!W.empty())
      W2.push_front(W.top()), W.pop();
   while (K-- > 0)
      Q2.push_front(Q.back()), Q.pop_back();

   while (!W2.empty()) {
      int cur = W2.front();
      W2.pop_front();

      int mn = Q.front(), mx = 0;

      rep(i, 1, cur - 1) Q.pop_front();
      mx = Q2.front();
      Q2.pop_front();

      ans += (mx + mn);
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