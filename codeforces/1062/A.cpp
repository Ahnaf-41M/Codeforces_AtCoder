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

void Solve()
{
   int N;
   cin >> N;
   int ar[N + 2];
   ar[0] = 0;
   ar[N + 1] = 1001;

   rep(i, 1, N) cin >> ar[i];

   int ans = 0;

   rep(i, 0, N + 1) {
      rep(j, i + 1, N + 1) {
         if (ar[i] - i == ar[j] - j)
            ans = max(ans, (j - i - 1));
      }
   }
   cout << ans;
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