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
   string s;
   deque<int> index;
   int done[52] = {};

   cin >> n >> k >> s;

   rep(i, 0, n - 1) if (s[i] == '*') index.pb(i);

   if (index.size() <= 2)
      cout << index.size() << endl;
   else {
      int st = index.front(); index.pop_front();
      int ed = index.back(); index.pop_back();

      int last = st, cur = st, ans = 2;
      bool ok = 0;
      if (ed - st <= k) {
         cout << ans << endl;
         return;
      }
      while (!index.empty()) {
         if (index.front() - cur <= k)
            last = index.front(), index.pop_front();
         else {
            cur = last;
            ans++;
            if (ed - last <= k) {
               ok = 1;
               break;
            }
            if (index.front() - cur <= k)
               last = index.front(), index.pop_front();
         }
      }
      if (!ok)
         ans++;
      cout << ans << endl;
   }
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