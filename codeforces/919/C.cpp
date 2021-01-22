#pragma GCC optimize("unroll-loops")
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

int N, M, K, ans;
char grid[2005][2005];
bool done[2005][2005];

void For_row()
{
   rep(i, 1, N) {
      rep(j, 1, M) {
         if (grid[i][j] == '.') {
            int cnt = 0;
            while (grid[i][j] == '.' && j <= M)
               j++, cnt++;
            if (cnt >= K)
               ans += (cnt - K + 1);
         }
      }
   }
}
void For_col()
{
   rep(j, 1, M) {
      rep(i, 1, N) {
         if (grid[i][j] == '.') {
            int cnt = 0 ;
            while (grid[i][j] == '.' && i <= N)
               i++, cnt++;
            if (cnt >= K)
               ans += (cnt - K + 1);
         }
      }
   }

}
void Solve()
{
   cin >> N >> M >> K;

   rep(i, 1, N) rep(j, 1, M) cin >> grid[i][j];

   For_row();
   if (K != 1)
      For_col();

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