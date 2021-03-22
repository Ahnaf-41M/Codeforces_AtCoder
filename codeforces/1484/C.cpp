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
   int n, m;

   cin >> n >> m;

   int ans[m + 1], day[m + 1][3], cnt[n + 1];
   int mx = (1 + m) / 2;

   rep(i, 1, n) cnt[i] = 0;
   rep(i, 1, m) {
      ans[i] = 0;
      day[i][1] = day[i][2] = -1;

      int k; cin >> k;
      rep(j, 1, k) {
         int x; cin >> x;
         if (k == 1)
            cnt[x]++;
         if (j <= 2)
            day[i][j] = x;
      }
   }
   rep(i, 1, n) if (cnt[i] > mx) {
      cout << "NO\n";
      return;
   }

   cout << "YES\n";
   rep(i, 1, m) {
      if (day[i][2] == -1)
         cout << day[i][1] << " ";
      else {
         if (cnt[day[i][1]] < mx)
            cout << day[i][1] << " ", cnt[day[i][1]]++;
         else
            cout << day[i][2] << " ", cnt[day[i][1]]++;
      }
   }
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