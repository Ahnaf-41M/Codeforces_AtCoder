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

map<int, int> exists, pos;

void Solve()
{
   int N;
   cin >> N;

   int ar[N];
   rep(i, 0, N - 1) {
      cin >> ar[i];
      exists[ar[i]]++;
      pos[ar[i]]++;
   }
   int ans = 0;
   rep(i, 0, N - 1) {
      int cur = ar[i], ok = 0;
      rep(j, 0, 32) {
         int diff = (1 << j) - cur;
         if ((diff == cur && exists[diff] > 1)
               || (diff != cur && exists[diff])) {
            ok = 1;
            break;
         }
      }
      if (!ok)
         ans++;
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