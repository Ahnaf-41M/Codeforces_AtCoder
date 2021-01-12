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

int h, w;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
char s[505][505];

bool Valid(int x, int y)
{
   rep(i, 0, 3) {
      int tx = x + dx[i];
      int ty = y + dy[i];
      if (tx >= 0 && tx < h && ty >= 0 && ty < w && s[tx][ty] == '*')
         continue;
      else
         return false;
   }
   return true;
}
int For_row(int i, int j)
{
   int row = i, res = 0;
   while (s[row][j] == '*' && row >= 0)
      res++, row--;
   row = i + 1;
   while (s[row][j] == '*' && row < h)
      res++, row++;
   return res;
}
int For_col(int i, int j)
{
   int col = j, res = 0;
   while (s[i][col] == '*' && col >= 0)
      res++, col--;
   col = j + 1;
   while (s[i][col] == '*' && col < w)
      res++, col++;
   return res;
}
void Solve()
{
   int tot = 0;
   cin >> h >> w;

   rep(i, 0, h - 1) {
      rep(j, 0, w - 1) {
         cin >> s[i][j];
         tot = (s[i][j] == '*' ? tot + 1 : tot);
      }
   }
   rep(i, 0, h - 1) {
      rep(j, 0, w - 1) {
         if (s[i][j] == '*' && Valid(i, j)) {
            int cnt = For_row(i, j) + For_col(i, j) - 1;
            if (cnt == tot) {
               cout << "Yes\n";
               return;
            }
         }
      }
   }
   cout << "No\n";
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