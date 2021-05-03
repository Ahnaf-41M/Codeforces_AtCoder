#include <bits/stdc++.h>
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

vector<int> sum;
void Solve()
{
   int n;
   cin >> n;

   int step = lower_bound(all(sum), n) - sum.begin();
   if (sum[step] == n || sum[step] - n != 1) cout << step << endl;
   else cout << step + 1 << endl;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   rep(i, 0, 2000) sum.pb((i * (i + 1)) / 2);
   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}