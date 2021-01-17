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

int N, s, ans = 0;
vector<int> ar;

int Less()
{
   int ans = 0;
   irep(i, N / 2, 0) {
      if (ar[i] > s)
         ans += ar[i] - s;
      else
         break;
   }
   return ans;
}
int Greater()
{
   int ans = 0;
   rep(i, N / 2, N - 1) {
      if (ar[i] < s)
         ans += s - ar[i];
      else
         break;
   }
   return ans;
}
void Solve()
{
   int res = 0;
   cin >> N >> s;

   rep(i, 1, N) {
      int x; cin >> x;
      ar.pb(x);
   }
   sort(all(ar));

   if (s < ar[N / 2])
      res = Less();
   else
      res = Greater();
   cout << res;
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
