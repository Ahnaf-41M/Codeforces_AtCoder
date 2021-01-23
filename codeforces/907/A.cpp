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

vector<int> v(4);

bool Check(int i, int j, int k)
{
   bool ok1 = i >= v[0] && 2 * v[0] >= i;
   bool ok2 = j >= v[1] && 2 * v[1] >= j;
   bool ok3 = k >= v[2] && 2 * v[2] >= k;
   bool ok4 = k >= v[3] && 2 * v[3] >= k && j > 2 * v[3];

   return (ok1 && ok2 && ok3 && ok4);
}
void Solve()
{

   rep(i, 0, 3) cin >> v[i];

   rep(i, 1, 200) {
      rep(j, 1, i - 1) {
         rep(k, 1, j - 1) {
            if (Check(i, j, k)) {
               cout << i << "\n" << j << "\n" << k;
               return;
            }
         }
      }
   }
   cout << -1;

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