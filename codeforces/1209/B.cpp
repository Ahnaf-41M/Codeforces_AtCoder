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

int States[200][200];

void Solve()
{
   int n;
   string s;
   cin >> n >> s;
   int a[n], b[n];

   rep(i, 0, n - 1) cin >> a[i] >> b[i];

   rep(i, 0, n - 1) States[i][0] = (s[i] == '1' ? 1 : 0);

   int cur;

   rep(i, 0, n - 1) {
      cur = b[i];
      States[i][cur] = States[i][cur - b[i]] ^ 1;
      rep(j, 1, cur - 1) States[i][j] = States[i][j - 1];
      while (cur + a[i] <= 150) {
         rep(j, cur + 1, cur + a[i] - 1) States[i][j] = States[i][j - 1];
         cur += a[i];
         States[i][cur] = States[i][cur - a[i]] ^ 1;
      }
   }
   int ans = 0;
   rep(j, 0, 150) {
      int tmp = 0;
      rep(i, 0, n - 1) tmp += States[i][j];
      ans = max(ans, tmp);
   }
   // rep(i, 0, n - 1) {
   //    rep(j, 0, 20) {
   //       cout << States[i][j] << " ";
   //    }
   //    cout << endl;
   // }
   cout << ans;
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