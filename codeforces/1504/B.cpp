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

bool Equal(string a, string b)
{
   rep(i, 0, a.size() - 1) {
      if (a[i] != b[i])
         return false;
   }
   return true;
}
void Solve()
{
   int n, one = 0, zero = 0, left = 0;
   string a, b;
   vector<pair<int, int>> segs;

   cin >> n >> a >> b;

   rep(i, 0, n - 1) {
      one += (a[i] == '1');
      zero += (a[i] == '0');
      if (one == zero) {
         segs.pb({left, i});
         left = i + 1;
      }
   }
   for (auto it : segs) {
      int l = it.first, r = it.second;
      if (a[l] == b[l])
         continue;
      rep(i, l, r) a[i] = (a[i] == '1' ? '0' : '1');
   }
   if (Equal(a, b))
      cout << "YES\n";
   else
      cout << "NO\n";
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