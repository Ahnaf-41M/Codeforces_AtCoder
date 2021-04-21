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
   int a[n];

   rep(i, 0, n - 1) cin >> a[i];
   rep(i, 0, n - 2) {
      int j = n - 1;

      while (k > 0 && a[i] > 0) {
         a[i]--;
         a[j]++;
         k--;
      }
   }
   rep(i, 0, n - 1) cout << a[i] << " ";
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