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
   int n;
   cin >> n;

   vector<pair<int, int>> v(n);

   for (auto &p : v)
      cin >> p.first >> p.second;
   sort(all(v));

   int ans = 0;
   for (int i = 0; i < n; i++) {
      if (!i || i == n - 1) {
         ans++;
         continue;
      }
      if (v[i].first - v[i].second > v[i - 1].first) 
         ans++;
      else if (v[i].first + v[i].second < v[i + 1].first) 
         ans++, v[i].first += v[i].second;
   }
   cout << ans;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}