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

void Divide(vector<int> v, map<int, int> &has)
{
   int sum = accumulate(all(v), (int)0);
   has[sum]++;

   int mn = v[0];
   int mx = v[v.size() - 1];
   int avg = (mx + mn) / 2;
   if (mn == mx)
      return;

   vector<int> left, right;
   for (int x : v) {
      if (x <= avg) left.pb(x);
      else right.pb(x);
   }

   Divide(left, has);
   Divide(right, has);
}
void Solve()
{
   int n, q;
   vector<int> v;
   map<int, int> has;

   cin >> n >> q;
   rep(i, 1, n) {
      int x; cin >> x;
      v.pb(x);
   }
   sort(all(v));

   Divide(v, has);

   while (q--) {
      int x; cin >> x;
      cout << (has[x] > 0 ? "Yes\n" : "No\n");
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