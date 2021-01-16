#include <bits/stdc++.h>
#include <ext/rope>

#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            1005

#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)

using namespace std;
using namespace __gnu_cxx;

int N, M;
char s[MX][MX], ans[MX][MX];
int dx[] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[] = { -1, 0, 1, -1, 0, 1, 1, -1};

bool Valid(int x, int y)
{
   return (x >= 0 && x < N && y >= 0 && y < M && s[x][y] == '#');
}
bool Check(int x, int y)
{
   rep(i, 0, 7) {
      int tx = dx[i] + x;
      int ty = dy[i] + y;
      if (!Valid(tx, ty))
         return false;
   }
   return true;
}
void Make(int x, int y)
{
   rep(i, 0, 7) {
      int tx = dx[i] + x;
      int ty = dy[i] + y;
      ans[tx][ty] = '#';
   }
   // cout << "Debug\n";
}
void Solve()
{
   cin >> N >> M;

   rep(i, 0, N - 1) {
      rep(j, 0, M - 1) {
         cin >> s[i][j];
         ans[i][j] = '.';
      }
   }
   rep(i, 0, N - 1) {
      rep(j, 0, M - 1) {
         if (Check(i, j))
            Make(i, j);
      }
   }
   rep(i, 0, N - 1) {
      rep(j, 0, M - 1) {
         if (s[i][j] != ans[i][j]) {
            cout << "NO\n";
            return;
         }
      }
      // cout << endl;
   }
   cout << "YES\n";
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