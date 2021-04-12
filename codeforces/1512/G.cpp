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

void Pre()
{
   for (int i = 1; i <= MX; i++) {
      for (int j = i; j <= MX; j += i) {
         SOD[j] += i;
      }
      if (SOD[i] <= MX-5 && !ans[SOD[i]])
         ans[SOD[i]] = i;
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
   Pre();
   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}