#include <bits/stdc++.h>
#include <ext/rope>

#define  pb   push_back
#define  int  long long
#define  endl "\n"
#define  MX   100005

#define  W(t)            while(t--)
#define  all(v)          v.begin(),v.end()
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  rep(i,a,b)      for(int i = a; i <= b; i++)

using namespace std;
using namespace __gnu_cxx;

char grid[51][51];
int ans[51][51];
int dx[] = { -1, -1, -1, 0, 1, 1, 1, 0};
int dy[] = { -1, 0, 1, 1, 1, 0, -1, -1};
int n,m;

bool is_valid(int x,int y)
{
   return (x >= 1 && x <= n && y >= 1 && y <= m && grid[x][y] == '.');
}
void solve()
{
   cin >> n >> m;
  
   rep(i, 1, n) {
      rep(j, 1, m) {
         cin >> grid[i][j];
      }
   }

   rep(i, 1, n) {
      rep(j, 1, m) {
         if (grid[i][j] == '#') {
            rep(k, 0, 7) {
               int x = i + dx[k];
               int y = j + dy[k];

               if (is_valid(x, y))
                  ans[x][y]++;
            }
         }
      }
   }
   rep(i, 1, n) {
      rep(j, 1, m) {
         if(grid[i][j]=='#') cout << "#";
         else cout << ans[i][j];
      }
      cout << endl;
   }
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   solve();

   return 0;
}