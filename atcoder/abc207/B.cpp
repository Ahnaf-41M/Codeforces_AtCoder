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
   int a, b, c, d;
   cin >> a >> b >> c >> d;

   rep(i, 0, MX) {
      int cyan = a + i * b;
      int red = i * c;

      if (red * d >= cyan) {
         cout << i;
         return;
      }
   }
   cout << -1;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}