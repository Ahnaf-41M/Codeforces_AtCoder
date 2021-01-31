#include <bits/stdc++.h>
#include <ext/rope>

#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            100005
#define  ff            first
#define  ss            second
#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)

using namespace std;
using namespace __gnu_cxx;

void Solve()
{
   int n, x, y, m, b, c, d, s, k, ans = 0;

   cin >> n >> m;
   int A[m], B[m];

   rep(i, 0, m - 1) cin >> A[i] >> B[i];

   cin >> k;
   int C[k], D[k];

   rep(i, 0, k - 1) cin >> C[i] >> D[i];

   rep(i, 0, (1 << k) - 1) {
      int cur = 0;
      map<int,int> has;
      rep(j, 0, k - 1) {
         if (i & (1 << j))
            has[C[j]]++;
         else
            has[D[j]]++;
      }
      rep(j, 0, m - 1) {
         if (has[A[j]] && has[B[j]])
            cur++;
      }
      ans = max(cur, ans);
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