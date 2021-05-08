#include <bits/stdc++.h>
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

int rem[3], ans, d;

void For_0()
{
   if (rem[0] < d) {
      int need = d - rem[0];
      if (rem[2] > d) {
         int mn = min(rem[2] - d, need);
         rem[2] -= mn, need -= mn;
         ans += mn;
      }
      if (need)
         ans += need * 2, rem[1] -= need;
   }
}
void For_1()
{
   if (rem[1] < d) {
      int need = d - rem[1];
      if (rem[0] > d) {
         int mn = min(rem[0] - d, need);
         rem[0] -= mn, need -= mn;
         ans += mn;
      }
      if (need)
         ans += need * 2, rem[2] -= need;
   }
}
void For_2()
{
   if (rem[2] < d) {
      int need = d - rem[2];
      if (rem[1] > d) {
         int mn = min(rem[1] - d, need);
         rem[1] -= mn, need -= mn;
         ans += mn;
      }
      if (need)
         ans += need * 2, rem[0] -= need;
   }
}
void Solve(int tc)
{
   rem[0] = rem[1] = rem[2] = 0;
   ans = d = 0;
   int n;
   cin >> n;
   rep(i, 1, n) {
      int x; cin >> x;
      rem[x % 3]++;
   }
   d = n / 3;
   For_0(); For_1(); For_2();
   cout << ans << endl;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}