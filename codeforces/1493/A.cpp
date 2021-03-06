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
   cin >> n >> k;

   int has[n + 1], ok[n + 1];
   memset(has, 1, sizeof(has));
   memset(ok, 1, sizeof(ok));
   
   ok[k] = false;
   rep(i, 1, k) {
      if (ok[k - i] && ok[i]&&i!=k-i) {
         ok[i] = false;
      }
   }
   vector<int> v;

   rep(i, 1, n) if (ok[i]) v.pb(i);

   cout << v.size() << endl;
   for (int x : v)
      cout << x << " ";
   cout << endl;

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