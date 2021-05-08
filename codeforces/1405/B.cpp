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

void Solve(int tc)
{
   int n, pos = 0, neg = 0;
   cin >> n;
   int ar[n];

   rep(i, 0, n - 1) {
      cin >> ar[i];
      if (ar[i] < 0) {
         if (pos) {
            int tmp = pos;
            pos = max((int)0, pos + ar[i]);
            ar[i] = min((int)0, tmp + ar[i]);
         }
         neg += ar[i];
      }
      else pos += ar[i];
   }
   cout << max(abs(neg), pos) << endl;
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