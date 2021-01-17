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

bool done[1005];
void Solve()
{
   int N, K;
   vector<int> ans;
   cin >> N >> K;

   if (K >= N) {
      cout << 1 << endl << 1;
      return;
   }
   rep(i, 1, N) {
      vector<int> ans;
      for (int j = i; j <= N; j += 2 * K + 1)
         ans.pb(j);
      if (N - ans.back() <= K) {
         cout << ans.size() << endl;
         for (int x : ans)
            cout << x << " ";
         return;
      }
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