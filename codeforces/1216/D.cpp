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
   int N, mxE = 0, difSum = 0;
   map<int, int> divCnt;
   vector<int> V;

   cin >> N;
   int ar[N];

   rep(i, 0, N - 1) {
      cin >> ar[i];
      mxE = max(mxE, ar[i]);
   }

   rep(i, 0, N - 1) {
      int cur = ar[i];
      difSum += abs(cur - mxE);
      V.pb(abs(cur - mxE));

   }
   int y = 0;

   for (int k : V)
      y = gcd(k, y);
   cout << (int)(difSum / y) << " " << y;

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