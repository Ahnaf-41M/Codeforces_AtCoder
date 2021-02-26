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
   int n, q, k;

   cin >> n >> q >> k;

   vector<int> ar, pre_sum;
   pre_sum.pb(0);
   ar.pb(0);

   rep(i, 0, n - 1) {
      int x; cin >> x;
      ar.pb(x);
   }
   rep(i, 1, n) {
      if (i == 1) {
         int cur = ar[i] - 1;
         if (i + 1 <= n)
            cur += (ar[i + 1] - ar[i] - 1);
         else
            cur += (k - ar[i]);
         pre_sum.pb(cur);
      }
      else if (i == n) {
         int cur = k - ar[i];
         if (i - 1 >= 1)
            cur += (ar[i] - ar[i - 1] - 1);
         pre_sum.pb(pre_sum.back() + cur);
      }
      else {
         int cur = 0;
         if (i - 1 >= 1)
            cur += (ar[i] - ar[i - 1] - 1);
         if (i + 1 <= n)
            cur += (ar[i + 1] - ar[i] - 1);
         pre_sum.pb(pre_sum.back() + cur);
      }
   }
   // for (int x : pre_sum)
   //    cout << x << " ";
   while (q--) {
      int l, r;
      cin >> l >> r;
      if (l == r)
         cout << k - 1 << endl;
      else {
         int left = ar[l] - 1;
         if (l + 1 <= r)
            left += (ar[l + 1] - ar[l] - 1);
         int right = k - ar[r];
         if (r - 1 >= l)
            right += (ar[r] - ar[r - 1] - 1);
         cout << pre_sum[r - 1] - pre_sum[l] + left + right << endl;

      }
   }
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   // int T;
   // cin >> T;

   // while (T--)
   Solve();

   return 0;
}