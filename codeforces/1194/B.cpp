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
   int N, M;
   cin >> N >> M;
   char s[N][M];
   int row[N], col[M];

   rep(i, 0, N - 1) {
      rep(j, 0, M - 1) {
         cin >> s[i][j];
         col[j] = 0;
      }
      row[i] = 0;
   }

   int ans = INT_MAX;

   rep(i, 0, N - 1) rep(j, 0, M - 1) row[i] = (s[i][j] == '.' ? row[i] + 1 : row[i]);
   rep(j, 0, M - 1) rep(i, 0, N - 1) col[j] = (s[i][j] == '.' ? col[j] + 1 : col[j]);

   rep(i, 0, N - 1) {
      // cout << i <<endl;
      rep(j, 0, M - 1) {
         if (s[i][j] == '.')
            ans = min(row[i] + col[j] - 1, ans);
         else
            ans = min(row[i] + col[j], ans);
         // cout << row[i] << " " << col[j] << endl;
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