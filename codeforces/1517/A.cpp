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

vector<int> v;

void Solve()
{
   int n;
   cin >> n;
   if (n % 2050)
      cout << -1 << endl;
   else {
      int cnt = 0;
      // cout << log(n)<<endl;
      irep(i, v.size() - 1, 0) {
         while (n >= v[i]) n -= v[i],cnt++;
      }
      cout << cnt << endl;
   }
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int cur = 2050, i = 1;
   rep(i, 1, 16) v.pb(cur), cur *= 10;
   // cout << v.back();

   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}