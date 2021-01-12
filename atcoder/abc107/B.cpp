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

char s[105][105];
bool done[105][105];
int n, m;

void For_row()
{
   rep(i, 1, n) {
      bool can = true;
      rep(j, 1, m) {
         if (s[i][j] == '#')
            can = false;
      }
      if (can) {
         rep(j, 1, m) done[i][j] = true;
      }
   }
}
void For_col()
{
   rep(j, 1, m) {
      bool can = true;
      rep(i, 1, n) {
         if (s[i][j] == '#')
            can = false;
      }
      if (can) {
         rep(i, 1, n) done[i][j] = true;
      }
   }
}
void Solve()
{
   cin >> n >> m;

   rep(i, 1, n) rep(j, 1, m) cin >> s[i][j];

   For_row();
   For_col();

   rep(i, 1, n) {
      bool ok = false;
      rep(j, 1, m) {
         if (!done[i][j]) {
            ok = true;
            cout << s[i][j];
         }
      }
      if (ok)
         cout << endl;
   }
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