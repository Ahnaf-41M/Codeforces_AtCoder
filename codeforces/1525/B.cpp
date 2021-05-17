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
   vector<int> v(n);

   for (int &x : v) cin >> x;

   if (is_sorted(all(v))) cout << "0\n";
   else if (v[0] == 1 || v[n - 1] == n) cout << "1\n";
   else {
      if (v[n - 1] == 1 && v[0] == n) cout << "3\n";
      else cout << "2\n";
   }
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