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

bool cmp(PII x, PII y)
{
   return x.ff < y.ff;
}
void Solve(int tc)
{
   int n;
   cin >> n;
   vector<pair<int, int>> v(n);

   rep(i, 0, n - 1) {
      cin >> v[i].ff;
      v[i].ss = i;
   }
   sort(all(v), cmp);
   cout << v[n - 2].ss + 1;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}