#include "bits/stdc++.h"
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

void Solve(int tc)
{
   double k, k2;
   double ans = 100;

   cin >> k;

   for (double i = 0; i <= 100; i++) {
      for (double j = 0; j <= 100; j++) {
         if ((i*100 / (i + j) == k))
            ans = min(i + j, ans);
      }
   }
   cout << (int)(ans) << endl;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}