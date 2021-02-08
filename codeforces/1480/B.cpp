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

bool cmp(pair<int, int> x, pair<int, int> y)
{
   return x.first < y.first;
}
void Solve()
{
   int A, B, n;
   cin >> A >> B >> n;

   pair<int, int> a[n];

   rep(i, 0, n - 1) cin >> a[i].first;
   rep(i, 0, n - 1) cin >> a[i].second;

   sort(a, a + n, cmp);

   bool ok = true;
   rep(i, 0, n - 2) {
      int qt = (a[i].second + A - 1) / A;
      B -= (qt * a[i].first);
   }
   if (B <= 0)
      ok = false;
   else {
      int qt1 = (a[n - 1].second + A - 1) / A;
      int qt2 = (B + a[n - 1].first - 1) / a[n - 1].first;
      if (qt1 > qt2)
         ok = false;
   }
   cout << (ok ? "YES\n" : "NO\n");
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