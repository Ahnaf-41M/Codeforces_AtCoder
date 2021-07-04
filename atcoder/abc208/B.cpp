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
   vector<int> v; v.pb(1);
   for (int i = 2; i <= 10; i++)
      v.pb(v.back()*i);

   int n, ans = 0, j = 9;
   cin >> n;

   while (j >= 0) {
      while (n >= v[j])
         n -= v[j], ans++;
      j--;
   }
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