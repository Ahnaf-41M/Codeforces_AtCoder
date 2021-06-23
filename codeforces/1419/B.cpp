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

vector<int> v;

void pre()
{
   rep(i, 0, 63) {
      int cur = ((int)1 << i) - 1;
      cur = (cur * (cur + 1)) / 2;
      v.pb(cur);
   }
}
void Solve(int tc)
{
   int x, n = 1;
   map<int, int> tot;

   cin >> x;
   while (n <= 63) {
      if (x >= v[n]) {
         x -= v[n]; n++;
      }
      else break;
   }
   cout << n - 1 << "\n";

}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   pre();
   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}