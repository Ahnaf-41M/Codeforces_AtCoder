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

int F(int n, int d)
{
   int cnt = 0;
   while (n)
      n /= d, cnt++;
   return cnt;
}
void Solve()
{
   int a, b = 1337, ans = INT_MAX, one = 0;
   cin >> a >> b;
   if (b == 1)
      b++, one++;
   rep(i, b, b + 10) {
      ans = min(ans,  i - b + F(a, i));
      // cout << i << " " << F(b, i) << endl;
   }
   cout << ans + one << endl;

   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}