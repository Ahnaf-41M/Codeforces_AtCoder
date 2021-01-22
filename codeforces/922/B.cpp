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

set<int> adj[2510];

void Pre_Cal()
{
   rep(i, 1, 2500) {
      rep(j, i + 1, 2500) {
         int k = i ^ j;
         int a = max(i, max(j, k));

         if (i + j > k && i + k > j && j + k > i && k <= 2500) {
            if (a == i)
               adj[a].insert({j, k});
            else if (a == j)
               adj[a].insert({i, k});
            else
               adj[a].insert({i, j});
         }
      }
   }
}
void Solve()
{
   Pre_Cal();
   
   int N, ans = 0;
   cin >> N;

   rep(i, 1, N) ans += adj[i].size();
   ans >>= 1;
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