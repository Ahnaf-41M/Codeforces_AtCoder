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

int a[2 * MX], b[2 * MX];
int N;

void Solve()
{
   cin >> N;
   rep(i, 1, N / 2) cin >> b[i];

   int cur_L = 0, cur_R = b[1];

   rep(i, 1, N / 2) {
      int diff = b[i] - cur_R;
      if (diff > cur_L)
         cur_L = diff;
      a[i] = cur_L;
      a[N - i + 1] = b[i] - cur_L;
      cur_R = a[N - i + 1];
   }
   rep(i, 1, N) cout << a[i] << " ";

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