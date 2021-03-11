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

char s[2005][2005];
int n, m, x, y, sx, sy;
bool vis[2005][2005];
int ans=1;
bool Valid(int xx, int yy)
{
   return (xx >= 1 && xx <= n && yy >= 1 && yy <= m
           && !vis[xx][yy] && s[xx][yy] == '.');
}
void bfs()
{
   deque<pair<int, int>> Q1, Q2;
   Q1.push_front({sx, sy});
   Q2.push_front({x, y});
   vis[sx][sy] = 1;

   while (!Q1.empty()) {
      int tx = Q1.front().first;
      int ty = Q1.front().second;
      Q1.pop_front();

      int cur_l = Q2.front().first;
      int cur_r = Q2.front().second;
      Q2.pop_front();

      if (Valid(tx - 1, ty)) {
         Q1.push_front({tx - 1, ty});
         Q2.push_front({cur_l, cur_r});
         ans++; vis[tx - 1][ty] = 1;
      }
      if (Valid(tx + 1, ty)) {
         Q1.push_front({tx + 1, ty});
         Q2.push_front({cur_l, cur_r});
         ans++; vis[tx + 1][ty] = 1;
      }
      if (Valid(tx, ty - 1) && cur_l) {
         Q1.push_back({tx, ty - 1});
         Q2.push_back({cur_l - 1, cur_r});
         ans++; vis[tx][ty - 1] = 1;
      }
      if (Valid(tx, ty + 1) && cur_r) {
         Q1.push_back({tx, ty + 1});
         Q2.push_back({cur_l, cur_r - 1});
         ans++; vis[tx][ty + 1] = 1;
      }
   }
}
void Solve()
{
   cin >> n >> m >> sx >> sy >> x >> y;

   rep(i, 1, n) rep(j, 1, m) cin >> s[i][j];
   bfs();
   // rep(i, 1, n) rep(j, 1, m) ans += vis[i][j];
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