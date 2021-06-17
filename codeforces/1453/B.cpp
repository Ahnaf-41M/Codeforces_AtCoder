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

void Solve(int tc)
{
   int n, res = 0, mx = 0;

   cin >> n;
   int ar[n];
   for (int& x : ar)
      cin >> x;

   mx = max(abs(ar[1] - ar[0]), abs(ar[n - 1] - ar[n - 2]));
   rep(i, 1, n - 1) res += abs(ar[i] - ar[i - 1]);
   rep(i, 1, n - 2) mx = max(mx, abs(ar[i] - ar[i - 1]) + abs(ar[i] - ar[i + 1]) - abs(ar[i + 1] - ar[i - 1]));

   cout << res - mx << "\n";

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