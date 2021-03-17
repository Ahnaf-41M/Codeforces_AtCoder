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
   int n, m, ans = 0;
   unordered_map<int, int> mp, was;
   set<int> unq;

   cin >> n >> m;
   int ar[n];
   rep(i, 0, n - 1) {
      cin >> ar[i];
      if (ar[i] % m) {
         mp[(ar[i] % m)]++;
         unq.insert(ar[i]);
      }
      else
         ans = 1;
   }
   // for (auto it : mp)
   //    cout << it.first << " " << it.second << endl;
   rep(i, 1, m) {
      int mn = min(mp[i], mp[m - i]);
      if (mn) {
         if (i == m - i) {
            int d = mp[i] / 2;
            mp[i] = 0;
         }
         else {
            if (mp[i] > mn)
               mp[i]--;
            else if (mp[m - i] > mn)
               mp[m - i]--;
            mp[i] -= mn;
            mp[m - i] -= mn;
         }
         ans++;
      }
   }
   for (auto it : mp)
      ans += it.second;
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