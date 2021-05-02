#include <bits/stdc++.h>
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

void Solve()
{
   int n, x, k1, k2 = -1, sum = 0;
   cin >> n >> x;
   int ar[n];

   rep(i, 0, n - 1) cin >> ar[i], sum += ar[i];

   if (sum == x) {
      cout << "NO\n"; return;
   }
   if (sum < x) {
      cout << "YES\n"; rep(i, 0, n - 1) cout << ar[i] << " ";
      cout << endl; return;
   }
   sort(ar, ar + n, greater<int>());
   sum = 0;
   rep(i, 0, n - 1) {
      sum += ar[i];
      if (sum > x) {
         if (i > 0) {
            swap(ar[i], ar[i - 1]);
         }
         break;
      }
   }
   cout << "YES\n";
   rep(i, 0, n - 1) cout << ar[i] << " ";
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