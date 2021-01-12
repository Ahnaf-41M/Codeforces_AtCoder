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

int N;
vector<int> v;
void Solve()
{
   cin >> N;

   v.pb(-1);
   rep(i, 0, N - 1) {
      int x; cin >> x;
      v.pb(x);
   }
   int ans = INT_MAX;

   rep(i, 1, N) {
      int j = N - i;
      ans = min(ans, (int)(v[i] / max(i - 1, j)));
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