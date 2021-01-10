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

int ar[305][305];
void Solve()
{
   int n, n2, col = 1;

   cin >> n;
   n2 = n * n;

   while (n2 > 0) {
      if (col & 1) {
         for (int i = 1; i <= n; i++) {
            ar[i][col] = n2;
            n2--;
         }
      }
      else {
         for (int i = n; i >= 1; i--) {
            ar[i][col] = n2;
            n2--;
         }
      }
      col++;
   }
   for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
         cout << ar[i][j] << " ";
      }
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