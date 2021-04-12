#include <bits/stdc++.h>
#include <ext/rope>

#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            10000005

#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)

using namespace std;
using namespace __gnu_cxx;

int ans[MX + 5], SOD[MX + 5];

void Sieve()
{
   // memset(SOD, 1, sizeof(SOD));
   fill(SOD, SOD + MX + 5, 1);
   for (int i = 2; i <= MX; i++) {
      if (SOD[i] == 1) {
         for (int j = i; j <= MX; j += i) {
            int cur = j;
            int cur_term = 1, cur_sum = 1;
            while (cur % i == 0) {
               cur /= i;
               cur_term *= i; //1,p^1,p^2...
               cur_sum += cur_term; //1+p^2+p^2+...
            }
            SOD[j] *= cur_sum;
         }
      }
   }

   ans[1] = 1;
   for (int i = 2; i <= MX; i++) {
      if (SOD[i] < MX) {
         if (!ans[SOD[i]])
            ans[SOD[i]] = i;
      }
   }
}
void Solve()
{
   int n; cin >> n;
   if (ans[n])
      cout << ans[n] << endl;
   else
      cout << -1 << endl;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   Sieve();

   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}