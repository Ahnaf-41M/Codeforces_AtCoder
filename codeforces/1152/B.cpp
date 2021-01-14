#include <bits/stdc++.h>
#include <ext/rope>

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
using namespace __gnu_cxx;

void Solve()
{
   int n, cnt = 0;
   vector<int> ans;

   cin >> n;
   while (true)
   {
      int pp = log2(n);
      pp++;
      if (n == (1 << (pp)) - 1)
         break;
      cnt++;
      if (cnt & 1) {
         int x = (1 << pp) - 1;
         n = n ^ x;
         ans.pb(pp);
      }
      else
         n++;
   }
   cout << cnt << endl;
   for(int x : ans)
      cout << x <<" ";
   // cout << n;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   //int T;
   //cin >> T;

   //while (T--)
   Solve();

   return 0;
}