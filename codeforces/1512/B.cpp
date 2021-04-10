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

int Ok1[500][500], Ok2[500][500];
char s[500][500];
int x1, y1, x2, y2;
void Solve()
{
   int n, pp = 0; cin >> n;
   rep(i, 1, n) rep(j, 1, n) {
      cin >> s[i][j];
      if (!pp && s[i][j] == '*') {
         x1 = i, y1 = j;
         pp++;
         rep(k, 1, n) Ok1[i][k] = 1;
         rep(k, 1, n) Ok1[k][j] = 1;
      }
      else if (s[i][j] == '*') {
         x2 = i, y2 = j;
         rep(k, 1, n) Ok2[i][k] = 1;
         rep(k, 1, n) Ok2[k][j] = 1;
      }
   }
   if (x2 == x1) {
      rep(i, 1, n) {
         if (i != x1 && i != x2) {
            s[i][y1] = '*', s[i][y2] = '*';
            break;
         }
      }
   }
   else if (y1 == y2) {
      // cout << "ok\n";
      // cout << x1 << " " << x2 << endl;
      rep(i, 1, n) {
         if (i != y1 && i != y2) {
            s[x1][i] = '*', s[x2][i] = '*';
            break;
         }
      }
   }
   else {
      pp = 0;
      rep(i, 1, n) {
         rep(j, 1, n) {
            if (Ok1[i][j] && Ok2[i][j] && s[i][j] != '*') {
               s[i][j] = '*';
               pp++;
            }
            if (pp == 2)
               break;
         }
         if (pp == 2)
            break;
      }
   }
   // rep(i,1,n){
   //    if(Ok1[i][k])
   // }
   rep(i, 1, n) {
      rep(j, 1, n) {
         cout << s[i][j];
         Ok1[i][j] = Ok2[i][j] = 0;
      }
      cout << "\n";
   }
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