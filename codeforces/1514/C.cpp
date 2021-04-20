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
   int n, prod = 1;
   vector<int> v;
   cin >> n;

   rep(i, 1, n - 1) if (gcd(i, n) == 1) v.pb(i), prod = (prod * i) % n;
   if (prod == 1) {
      cout << v.size() << endl;
      for (int x : v)cout << x << " ";
   }
   else {
      cout << v.size() - 1 << endl;
      for (int x : v) if (x != prod) cout << x << " ";
   }
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   //int T;
   //cin >> T;

   //while (T--)
   Solve();

   return 0;
}