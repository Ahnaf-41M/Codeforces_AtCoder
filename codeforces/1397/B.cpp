#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int n;

int LOG(int m, int d)
{
   int res = 0;
   while (m)
      res++, m /= d;
   return res;
}
int func(int num, vector<int> v)
{
   int res = 0, cur = 1;
   int bp = LOG(LLONG_MAX, num);

   if (bp < n - 1) return 1e18;
   for (int x : v) {
      res += abs(x - cur);
      cur *= num;
   }
   return res;
}

void Solve(int tc)
{
   int ans = 1e18, sum = 0;
   cin >> n;

   vector<int> v(n);
   for (int &x : v) {
      cin >> x;
      sum += abs(x - 1);
   }
   sort(all(v));

   int num1 = ceil(pow(1.0 * v.back(), 1.0 / (n - 1)));
   int num2 = floor(pow(1.0 * v.back(), 1.0 / (n - 1)));

   if (num1 == 1 || num2 == 1) ans = min(ans, sum);
   if (num1 != 1) ans = min(ans, func(num1, v));
   if (num2 != 1) ans = min(ans, func(num2, v));

   cout << ans;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}