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

char s[505][505];
int n, m, pre[505][505];
void Solve()
{
   int ans = 0;

   cin >> n >> m;
   rep(i, 1, n) rep(j, 1, m) {
      cin >> s[i][j];
      pre[i][j] = pre[i][j - 1];
      if (s[i][j] == '*') pre[i][j]++;
   }

   rep(i, 1, n) {
      rep(j, 1, m) {
         int R = j, L = j;
         rep(k, i, n) {
            if (pre[k][R] - pre[k][L - 1] != R - L + 1)
               break;
            ans++;
            R++, L--;
            if (R > m || L < 0)
               break;
         }
      }
   }
   cout << ans << endl;
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