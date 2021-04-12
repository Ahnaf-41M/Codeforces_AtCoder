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
   int n, ok = -1, x = -1;
   vector<int> ans;
   map<int, int> mp;

   cin >> n;
   n += 2;

   int ar[n], pre[n];

   rep(i, 0, n - 1) {
      cin >> ar[i];
      pre[i] = (!i ? ar[i] : pre[i - 1] + ar[i]);
      mp[ar[i]]++;
   }
   rep(i, 0, n - 1) {
      // cout << pre[i]<<": ";
      int cur = pre[n - 1] - ar[i];
      if (cur % 2 == 0 && ((mp[cur / 2] && cur / 2 != ar[i]) || mp[cur / 2] > 1)) {
         ok = cur / 2;
         x = ar[i];
         break;
      }
   }
   if (ok == -1)
      cout << -1 << endl;
   else {
      int c1 = 0, c2 = 0;
      // cout << x << " " << ok << endl;
      rep(i, 0, n - 1) {
         if (ar[i] == x && !c1) {
            c1++; continue;
         }
         if (ar[i] == ok && !c2) {
            c2++;
            continue;
         }
         ans.pb(ar[i]);
      }
      sort(all(ans));
      for (int x : ans)
         cout << x << " ";
      cout << endl;
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