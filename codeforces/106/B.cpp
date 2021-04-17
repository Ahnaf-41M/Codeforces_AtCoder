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

struct info
{
   int speed, ram, hdd, cost;
} ar[105];
bool done[105];

void Solve()
{
   int n, mnCost = INT_MAX, ans;
   cin >> n;

   rep(i, 1, n) {
      cin >> ar[i].speed >> ar[i].ram >> ar[i].hdd >> ar[i].cost;
   }
   rep(i, 1, n) {
      int spd = ar[i].speed, ram = ar[i].ram, hdd = ar[i].hdd;
      int cost = ar[i].cost;

      rep(j, 1, n) {
         if (i != j) {
            if (spd > ar[j].speed && ram > ar[j].ram && hdd > ar[j].hdd && cost > ar[j].cost)
               done[j] = 1;
         }
      }
   }
   rep(i, 1, n) if (!done[i]) {
      if (mnCost > ar[i].cost) {
         mnCost = ar[i].cost;
         ans = i;
      }
   }
   cout << ans;
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