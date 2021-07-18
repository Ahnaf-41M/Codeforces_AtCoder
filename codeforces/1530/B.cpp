#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int n, m;
int dx[] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[] = {1, -1, 0, 1, 0, -1, 1, -1};

bool Valid(int x, int y)
{
   return x >= 0 && x < n && y >= 0 && y < m;
}
void Solve(int tc)
{
   cin >> n >> m;

   int grid[n][m];
   rep(i, 0, n - 1) {
      rep(j, 0, m - 1) {
         if (!i || !j || j == m - 1 || i == n - 1) grid[i][j] = 1;
         else grid[i][j] = 0;
      }
   }

   auto Valid = [&](int x, int y) {
      return x >= 0 && x < n && y >= 0 && y < m;
   };

   rep(i, 0, n - 1) {
      rep(j, 0, m - 1) {
         if (grid[i][j] == 1) {
            rep(k, 0, 7) {
               int tx = dx[k] + i, ty = dy[k] + j;
               if (Valid(tx, ty)) grid[tx][ty] = 0;
            }
         }
      }
   }
   rep(i, 0, n - 1) {
      rep(j, 0, m - 1) {
         cout << grid[i][j];
      }
      cout << "\n";
   }
   cout << "\n";
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}