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
   int n, k;
   cin >> n >> k;
   if (n & 1) {
      int interval = n >> 1;
      int gaps = k / interval;
      gaps -= (k % interval == 0);
      k = (k + gaps) % n;
      k = (!k ? n : k);
      cout << k << "\n";
   }
   else {
      k %= n;
      k = (!k ? n : k);
      cout << k << "\n";
   }
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}