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

int N, K;
char grid[105][105];
int ans, ax = 1, ay = 1;

void Check(int x, int y)
{
   int i = x;
   int cnt = 1, tot = 0;

   while (grid[i][y] == '.' && i <= N)
      i++;
   cnt += min(K - 1, i - x - 1);
   i = x;
   while (grid[i][y] == '.' && i >= 1 )
      i--;
   cnt += min(K - 1, x - i - 1);

   if (cnt >= K) tot = (cnt / K) + (cnt % K);

   cnt = 1;
   int j = y;

   while (grid[x][j] == '.' && j <= N)
      j++;
   cnt += min(K - 1, j - y - 1);
   j = y;
   while (grid[x][j] == '.' && j >= 1)
      j--;
   cnt += min(K - 1, y - j - 1);

   if (cnt >= K) tot += (cnt / K) + (cnt % K);

   if (ans < tot) {
      ax = x, ay = y;
      ans = tot;
   }
   // if (x == 12 && y == 8)
   //    cout << tot << endl;
}
void Solve()
{
   cin >> N >> K;

   rep(i, 1, N) rep(j, 1, N) cin >> grid[i][j];

   rep(i, 1, N) {
      rep(j, 1, N) {
         if (grid[i][j] == '.')
            Check(i, j);
      }
   }
   cout << ax << " " << ay;
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